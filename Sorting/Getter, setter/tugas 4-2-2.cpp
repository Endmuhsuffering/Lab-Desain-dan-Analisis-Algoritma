#include<iostream> //library
using namespace std;//menghilangkan std

// Nama "class"
class contoh {
	private: //private artinya bisa diakses dalam class-nya sendiri
		int nilai; // mengdeklarasi variabel "nilai"
		
	public:
		// konstruktor yang mengambil input dari class "contoh"
		contoh(int n) {
			nilai = n;
		}
		
		// fungsi yang untuk mengambil nilai
		int getNum() {
			return nilai;
		}
};

int main() {
	// class "contoh" dinamakan "obj", dan di-input nilai 10
	contoh obj(10);
	
	// mencetak nilai yang di-input "obj"
	cout << "nilai yang di input: " << obj.getNum() << endl;

	return 0; // mengembalikan ke 0 mengartikan program itu selesai
}
