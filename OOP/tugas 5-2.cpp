#include <iostream>
using namespace std;

class bangundatar{
	protected:
		int lebar,tinggi;
		
		public:
			void setvalue(int a,int b){
				lebar=a;
				tinggi=b;
			}
};

class persegipanjang:public bangundatar{
	public:
		int getvalue(){
			return(lebar*tinggi);
		}
};

class segitiga:public bangundatar{
	public:
		int getvalue(){
			return(lebar*tinggi/2);
		}
};

int main(){
	
	int lp,tp,ls,ts;
	
	persegipanjang p_panjang;
	segitiga s_tiga;
	
	cout<<"Masukan panjang persegi panjang : ";cin>>lp;
	cout<<"\nMasukan lebar persegi panjang : ";cin>>tp;
	cout<<"\nMasukan alas segitiga : ";cin>>ls;
	cout<<"\nMasukan tinggi segitiga : ";cin>>ts;
	
	p_panjang.setvalue(lp,tp);
	s_tiga.setvalue(ls,ts);
	
	cout<<"\n\nLuas Persegi Panjang : "<<p_panjang.getvalue()<<endl;
	cout<<"Luas Segitiga : "<<s_tiga.getvalue()<<endl;
}
