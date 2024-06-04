#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *left, *right;
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};
void preorderTraversal(struct Node* node) {
  if (node == NULL)
    return;

  cout << node->data << " ";
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}
void postorderTraversal(struct Node* node) {
  if (node == NULL)
    return;

  postorderTraversal(node->left);
  postorderTraversal(node->right);
  cout << node->data << " ";
}

void inorderTraversal(struct Node* node) {
  if (node == NULL)
    return;

  inorderTraversal(node->left);
  cout << node->data << " ";
  inorderTraversal(node->right);
}
int main() {
	int array[]={12,16,20,24,32};
	Node* root=new Node(array[0]);
	root->left=new Node(array[1]);
	root->right=new Node(array[2]);
	root->left->left=new Node(array[3]);
	root->left->right=new Node(array[4]);
	
	cout<<"Nilai simpul pohon: "<<endl;
	cout<<"Akar: "<<root->data<<endl;
	cout<<"Anak kiri dari akar: "<<root->left->data<<endl;
	cout<<"Anak kanan dari akar: "<<root->right->data<<endl;
	cout<<"Anak kiri dari Anak kiri dari akar: "<<root->left->left->data<<endl;
	cout<<"Anak kanan dari Anak kiri dari akar: "<<root->left->right->data<<endl;

  cout << "\nInorder traversal: ";
  inorderTraversal(root);

  cout << "\nPreorder traversal: ";
  preorderTraversal(root);

  cout << "\nPostorder traversal: ";
  postorderTraversal(root);
}
