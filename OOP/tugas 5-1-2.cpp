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
	persegipanjang p_panjang;
	segitiga s_tiga;
	
	p_panjang.setvalue(4,5);
	s_tiga.setvalue(10,5);
	
	cout<<p_panjang.getvalue()<<endl;
	cout<<s_tiga.getvalue()<<endl;
}
