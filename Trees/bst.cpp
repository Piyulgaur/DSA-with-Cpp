#include<iostream>
using namespace std;

class BinaryTreeNode{
    public:
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int d){
        left = NULL;
        right = NULL;
        data = d;
    }
};

BinaryTreeNode* InsertIntoBST(BinaryTreeNode* root, int d){
    if(root == NULL){
        root = new BinaryTreeNode(d);
        return root;
    }
    if(d < root->data){
    root->left = InsertIntoBST(root->left, d);
    }
    else
    root->right =  InsertIntoBST(root->right, d);

    return root;
}

void inorder(BinaryTreeNode* root)
{

    if(root == NULL)
    return ;
    
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    
}

BinaryTreeNode* minValue( BinaryTreeNode* root){
    BinaryTreeNode* min = root;
    while(min->left != NULL){
        min = min->left;
    }
    return min;
}


BinaryTreeNode* maxValue( BinaryTreeNode* root){
    BinaryTreeNode* max = root;
    while(max->right != NULL){
        max = max->right;
    }
    return max;
}

BinaryTreeNode* deleteFromBST( BinaryTreeNode* root, int key){
    if( root == NULL)
    return NULL;

    if( root->data == key){
        //0 Child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        
        //1 Child
        //left child 
        if(root->left != NULL && root->right == NULL){
            BinaryTreeNode* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left == NULL && root->right != NULL){
            BinaryTreeNode* temp = root->right;
            delete root;
            return temp;
        }
        //2 Child
        if(root->left != NULL && root->right != NULL){
            int min = minValue(root->right) -> data;
            root->data = min; 
            root->right = deleteFromBST(root->right, min);
            return root;
        }
    }
    else if(root->data > key){
        root->left = deleteFromBST(root->left, key);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, key);
        return root;
    }
}

int main(){
    BinaryTreeNode* root = NULL;
    root = InsertIntoBST(root, 10);
    root = InsertIntoBST(root, 8);
    root = InsertIntoBST(root, 21);
    root = InsertIntoBST(root, 7);
    root = InsertIntoBST(root, 27);
    root = InsertIntoBST(root, 5);
    root = InsertIntoBST(root, 4);
    root = InsertIntoBST(root, 3);

    inorder(root);
}