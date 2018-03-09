#include <iostream>

using namespace std;

struct Node {
    long data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, long value){
    // Add your code here
    if (root == NULL){
        root = new Node;
        root -> data = value;
        root -> left = NULL;
        root -> right = NULL;
        return root;
    }
    if (value < root -> data){
        if (root->left == NULL){

            root->left = new Node;

            root->left->data = value;

            root->left->left = NULL;
            root->left->right = NULL;
        }else{ 
            insert(root->left, value);
            }
    }else{
        if (root->right == NULL){
            root->right = new Node;

            root->right->data = value;

            root->right->left = NULL;
            root->right->right = NULL;
        }else{
            insert(root->right, value);
            }
        }
        return root;
    }

void print (Node* root){
// Add your code here
    if (root == NULL){
        return;
    }
    print (root -> left);
    cout << root -> data << " ";
    print (root -> right);

}

int main(int argc, const char * argv[]) {

    Node* tree = NULL;
    tree = insert(tree, 5);
    tree = insert(tree, 3);
    tree = insert(tree, 8);
    tree = insert(tree, 1);
    tree = insert(tree, 6);
    tree = insert(tree, 4);
    tree = insert(tree, 7);
    
    print(tree);
    
    //Result should be: 1 3 4 5 6 7 8
    
    return 0;
}