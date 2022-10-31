#include <iostream>
using namespace std;

class node
{
public:
    node *prev;
    node *next;
    int data;

    node(int val)
    {

        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insert(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        node *temp = head;
        node *q = head;
        while (temp->next != NULL)
        {
            q = temp->next;
            temp = temp->next;
        }
        temp->next = n;
        temp = temp->next;
        temp->prev = q;
    }
}

void display(node *head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void revDisplay(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *last = temp;
    while (last != NULL)
    {
        cout << last->data << " ";
        last = last->prev;
    }
}

void deleteAtBegin(node *&head)
{
    node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete (temp);
}

void deleteAtMiddle(node *head, int val)
{

    node *temp = head;
    node *q = NULL;

    while (temp->data != val)
    {
        temp = temp->next;
    }
    if (temp->next != NULL)
    {

        q = temp->prev;
        q->next = temp->next;
        node *fordel = temp;
        temp = temp->next;
        temp->prev = q;
        delete (fordel);

    }
    else{
        node * d = temp -> prev;
        d -> next = NULL;
        delete(temp);
    }
}

int main()
{

    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    deleteAtMiddle(head, 5);

    display(head);

    cout << "\n";

    revDisplay(head);
}
