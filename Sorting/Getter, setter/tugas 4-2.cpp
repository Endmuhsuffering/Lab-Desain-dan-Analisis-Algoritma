#include<iostream>
using namespace std;

class info{
	private:
		string nama[100];
		int nomor[100];
	
	public:
		info(){
			nama[0] = "Tidak Diketahui";
			nomor[0] = 0;			
		}
		
		void data(int x[], string a[], int c){
			for(int i = 0; i < c; i++) {
				nama[i] = a[i];
				nomor[i] = x[i];
			}
		}
		
		void print(int j){
			for(int i = 0; i < j; i++){
				cout<<"\nKontak ke-"<<i+1<<endl
					<<"Nama: "<<nama[i]<<endl
					<<"Nomor Telpon: "<<nomor[i]<<endl;
			}
		}
};

int main(){
	int c=1, z, d[100];
	string a, b[1000];
	char x;
	info inf;
	cout<<"Masukan Kontak";
	
	do{
		cout<<"\nMasukan Nama Kontak ke-"<<c<<": ";
		getline(cin >> ws, a);
		cout<<"Masukan Nomor: ";
		cin >> d[c];
		
		b[c] = a;
		c++;
		cout<<"Kontak Berhasil Ditambahkan\n";
		
		cout<<"Tambahkan Kontak Lagi? (y/n)";
		cin>>x;
	}
	while(x == 'y');
	
	inf.data(d, b, c);

	inf.print(c);

	return 0;
}


