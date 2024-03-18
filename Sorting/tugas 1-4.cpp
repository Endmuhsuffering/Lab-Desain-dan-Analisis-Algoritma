#include <bits/stdc++.h> 
#include <string>
using namespace std; 
  
void printArray(string arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << "\n";  
    cout << endl;  
}  

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(string arr[], int n)  
{  
    int i, j, min_idx;  
  
 
    for (i = 0; i < n-1; i++)  
    {  
        

        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
  
        swap(arr[min_idx], arr[i]);   
    }  
}  
  

int main()  
{  
    string arr[100]; 
	int n,b;
	bool decide=true;
	char toaccept;
	cout<<"Input the numbers of books to be inputted : ";
	cin>>n;
    for(b=0;b<n;b++){
    	cout<<"Input the book title No."<<b+1<<" in the array : ";
    	cin>>arr[b];
	}
    selectionSort(arr, n);
	cout<<"\nSorting result : \n";printArray(arr,n);
return 0;
	}
