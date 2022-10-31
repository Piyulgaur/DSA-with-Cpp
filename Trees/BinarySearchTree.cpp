#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *lchild;
    int data;
    node *rchild;

    node(int val)
    {
        data = val;
        lchild = NULL;
        rchild = NULL;
    }
};


// node * insertion(node * &p, int key){
//     node * t;
//     if(p == NULL){
//         t = new node(key);
//         return t;
//     }

//     if(key < p -> data){
//         p -> lchild = insertion(p -> lchild, key);
//     }
//     else if(key > p -> data){
//         p -> rchild = insertion(p -> rchild, key);
//     }
//     return t;
// }


void  insertion(node * t, int key){
    node * r = NULL;
    node * p;
    while( t!= NULL){
        r = t;
        if(key == t -> data)
        return;
        else if(key < t -> data)
        t = t -> lchild;
        else 
        t = t -> rchild;
    }
    p = new node(key);
    if( p -> data < r -> data)
    r -> lchild = p;
    else
    r -> rchild = p;
}

void inorder(node * t)
{

    if (t != NULL)
    {
        inorder(t->lchild);
        cout << t->data << " ";
        inorder(t->rchild);
    }
}



int main(){
    node * root = new node(30);
    insertion(root, 20); 
    insertion(root, 40); 
    insertion(root, 50); 
    insertion(root, 35); 
    insertion(root, 38); 
    insertion(root, 25); 
    insertion(root, 10); 
    inorder(root);
}