#include <bits/stdc++.h> 
using namespace std; 
  
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
 
    for (i = 0; i < n-1; i++)  
    {  
        

        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
  
        swap(&arr[min_idx], &arr[i]);  
        printArray(arr, n); 
    }  
}  
  

int main()  
{  
    int arr[100]; 
	int n,b,c ;
	cout<<"Input the numbers of array : ";
	cin>>n;
    for(b=0;b<n;b++){
    	cout<<"Input the No."<<b+1<<" array : ";
    	cin>>arr[b];
	}
	cout<<"\nThe inputted array : ";printArray(arr,n);
	cout << "\nSorting array: \n";   
    selectionSort(arr, n);
	cout<<"\nSorting result : ";printArray(arr,n);
    return 0;  
}  
