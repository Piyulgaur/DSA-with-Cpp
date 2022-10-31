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

node *createNode(int val)
{
    node *t = new node(val);
    return t;
}

void preorder(node *t)
{

    if (t != NULL)
    {
        cout << t->data << " ";
        preorder(t->lchild);
        preorder(t->rchild);
    }
}

void inorder(node *t)
{

    if (t != NULL)
    {
        inorder(t->lchild);
        cout << t->data << " ";
        inorder(t->rchild);
    }
}

void postorder(node *t)
{

    if (t != NULL)
    {
        postorder(t->lchild);
        postorder(t->rchild);
        cout << t->data << " ";
    }
}

// preorder
void iterative_pre(node *t)
{
    stack<node *> st;
    while (t != NULL || !st.empty())
    {
        if (t != NULL)
        {
            cout << t->data << " ";
            st.push(t);
            t = t->lchild;
        }
        else
        {
            t = st.top();
            st.pop();
            t = t->rchild;
        }
    }
}

// inorder
void iterative_in(node *t)
{
    stack<node *> st;
    while (t != NULL || !st.empty())
    {
        if (t != NULL)
        {
            st.push(t);
            t = t->lchild;
        }
        else
        {
            t = st.top();
            cout << t->data << " ";
            st.pop();
            t = t->rchild;
        }
    }
}

void iterative_post(node *t)
{
    stack<node *> st;
    long int temp;
    while (t != NULL || !st.empty())
    {
        if (t != NULL)
        {
            st.push(t);
            t = t->lchild;
        }
        else
        {
            temp = -1 * (long int)st.top();
            st.pop();
            if (temp > 0)
            {
                st.push((node *)temp);
                t = (node *)temp;
            }
            else{
                cout << ((node *)temp)->data << " ";
                t=NULL;
            }
        }
    }
}

void levelorder(node *t)
{
    queue<node *> q;
    q.push(t);
    while (!q.empty())
    {
        t = q.front();
        q.pop();
        cout << t->data << " ";
        if (t->lchild)
        {
            q.push(t->lchild);
        }
        if (t->rchild)
            q.push(t->rchild);
    }
}

int count(node * p){
    int x,y;
    if(p!=NULL){
        x = count(p->lchild);
        y = count(p->rchild);
        return x+y+1;
    }
    return 0;
}

int height(node * p){
    int x,y;
    if(p!=NULL){
        x = height(p->lchild);
        y = height(p->rchild);
        if(x>y)
        return x+1;
        else
        return y+1;
    }
    return 0;
}


int main()
{

    node *root = createNode(8);
    root->lchild = createNode(3);
    root->lchild->lchild = createNode(12);
    root->lchild->lchild->rchild = createNode(4);
    root->lchild->lchild->rchild->lchild = createNode(9);
    root->lchild->lchild->rchild->rchild = createNode(7);
    root->rchild= createNode(5);
    root->rchild->lchild = createNode(10);
    root->rchild->rchild = createNode(6);
    root->rchild->rchild->lchild = createNode(2);

    cout << count(root)<<endl;

    cout << height(root) << endl;

}