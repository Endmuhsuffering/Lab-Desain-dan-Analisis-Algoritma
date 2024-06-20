#include <iostream>
#include <vector>
using namespace std;

class Graf {
    int jumlahSimpul;
    vector<vector<int> > daftarAdjasi;

public:
    Graf(int simpul);
    void tambahTepi(int src, int dest);
    void cetakGraf();
};

Graf::Graf(int simpul) {
    jumlahSimpul = simpul;
    daftarAdjasi.resize(simpul);
}

void Graf::tambahTepi(int src, int dest) {
    daftarAdjasi[src].push_back(dest);
}

void Graf::cetakGraf() {
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << "Daftar tetangga simpul " << i << ": ";
        for (size_t j = 0; j < daftarAdjasi[i].size(); ++j) {
            cout << daftarAdjasi[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    Graf graf(4);

    graf.tambahTepi(0, 1);
    graf.tambahTepi(0, 2);
    graf.tambahTepi(1, 2);
    graf.tambahTepi(2, 0);
    graf.tambahTepi(2, 3);
    graf.tambahTepi(3, 3);

    graf.cetakGraf();
    return 0;
}
