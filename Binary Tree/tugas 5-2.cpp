#include<iostream>
using namespace std;

struct TreeNode{
	int data;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode(int value):data(value),left(NULL),right(NULL){}
};

int main(){
	TreeNode* root=new TreeNode(1);
	root->left=new TreeNode(2);
	root->right=new TreeNode(3);
	root->left->left=new TreeNode(4);
	root->left->right=new TreeNode(5);
	
	cout<<"Nilai simpul pohon: "<<endl;
	cout<<"Akar: "<<root->data<<endl;
	cout<<"Anak kiri dari akar: "<<root->left->data<<endl;
	cout<<"Anak kanan dari akar: "<<root->right->data<<endl;
	cout<<"Anak kiri dari Anak kiri dari akar: "<<root->left->left->data<<endl;
	cout<<"Anak kanan dari Anak kiri dari akar: "<<root->left->right->data<<endl;
}
