#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	int i,j,tmp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}

int main(){
	int array[100],a,b,j;
	cout<<"Masukan banyak elemen: ";
	cin>>a;
	cout<<"Masukan nilai: \n";
	for(b=0;b<a;b++){
		cin>>array[b];
	}
	bubbleSort(array, a);
	cout<<"Hasil pengurutan dengan algoritma bubble sort:\n";
	for(b=a;b>0;b--){
		cout<<array[b-1]<<"";
	}
	cout<<"\n";
	return 0;
}
