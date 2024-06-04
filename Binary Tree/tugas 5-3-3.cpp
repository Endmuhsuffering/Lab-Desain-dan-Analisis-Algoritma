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

void inorderTraversal(struct Node* node) {
  if (node == NULL)
    return;

  inorderTraversal(node->left);
  cout << node->data << " ";
  inorderTraversal(node->right);
}

int main() {
	int array[]={18,30,29,32,33};
	Node* root=new Node(array[0]);
	root->left=new Node(array[1]);
	root->left->left=new Node(array[2]);
	root->left->right=new Node(array[3]);
	root->right=new Node(array[4]);
	
	cout << "\nInorder traversal: ";
  	inorderTraversal(root);
}

