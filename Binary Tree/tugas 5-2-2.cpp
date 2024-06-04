#include<iostream>
using namespace std;

struct TreeNode{
	int data;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode(int value):data(value),left(NULL),right(NULL){}
};

int main(){
	int array[]={1,2,3,4,5};
	TreeNode* root=new TreeNode(array[0]);
	root->left=new TreeNode(array[1]);
	root->right=new TreeNode(array[2]);
	root->left->left=new TreeNode(array[3]);
	root->left->right=new TreeNode(array[4]);
	
	cout<<"Nilai simpul pohon: "<<endl;
	cout<<"Akar: "<<root->data<<endl;
	cout<<"Anak kiri dari akar: "<<root->left->data<<endl;
	cout<<"Anak kanan dari akar: "<<root->right->data<<endl;
	cout<<"Anak kiri dari Anak kiri dari akar: "<<root->left->left->data<<endl;
	cout<<"Anak kanan dari Anak kiri dari akar: "<<root->left->right->data<<endl;
}
