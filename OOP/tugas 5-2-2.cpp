#include <iostream>
#include <string.h>
using namespace std;

class mahasiswa{
	protected:
		string nama_, jurusan_, fakultas_, status_;
		int umur_;
	public:
		void setinfo(string a, int b, string c, string d){
			nama_ = a;
			umur_ = b;
			jurusan_ = c;
			fakultas_ = d;
		}
		
		virtual void setstatus(){
			status_ = "...";
		}
};

class aktif : public mahasiswa{
	public:
		void setstatusAK(){
			status_ = "Mahasiswa Aktif";
		}
		
		void getinfo(){
			cout<<"Nama    : "<<nama_<<endl
				<<"umur    : "<<umur_<<endl
				<<"Status  : "<<status_<<endl
				<<"Jurusan : "<<jurusan_<<endl
				<<"Fakultas: "<<fakultas_<<endl;
				
		}
};

class alumni : public mahasiswa{
	public:
		void setstatusAL(){
			status_ = "Alumni";
		}
		
		void getinfo(){
			cout<<endl<<"Nama    : "<<nama_<<endl
				<<"umur    : "<<umur_<<endl
				<<"Status  : "<<status_<<endl
				<<"Jurusan : "<<jurusan_<<endl
				<<"Fakultas: "<<fakultas_<<endl;
				
		}
};

int main(){
	string nama,jurusan,fakultas,status[100],state;
	int umur,jumlah;
	aktif mhaktif[100];
	alumni alumni[100];
	
	cout<<"Masukan Jumlah siswa : ";cin>>jumlah;
	for(int a=0;a<jumlah;a++){
		cout<<"\nMahasiswa ke-"<<a+1;
		cout<<"\nMasukan status (aktif/alumni) : ";getline(cin>>ws,state);status[a]=state;
		cout<<"Masukan nama : ";getline(cin >> ws, nama);
		cout<<"Masukan umur : ";cin>>umur;
		cout<<"Masukan jurusan : ";getline(cin >> ws, jurusan);
		cout<<"Masukan fakultas : ";getline(cin >> ws, fakultas);
		
		if(status[a] == "aktif"){
			mhaktif[a].setinfo(nama,umur,jurusan,fakultas);
			mhaktif[a].setstatusAK();
		}else if(status[a] == "alumni"){
			alumni[a].setinfo(nama,umur,jurusan,fakultas);
			alumni[a].setstatusAL();
		}
	
	
	}
	cout<<endl<<endl<<"Hasil Database : ";
	for(int b=0;b<jumlah;b++){
		cout<<endl<<"Mahasiswa ke-"<<b+1<<endl;
		if(status[b] == "aktif"){
			mhaktif[b].getinfo();
		}else if(status[b] == "alumni"){
			alumni[b].getinfo();
		}else{
			cout<<"error";
		}
	}
		

	

}
