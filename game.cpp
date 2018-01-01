#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* link;
};

void push(struct Node** head_ref, int data)
{
    struct Node* newNode = new Node;
    newNode->data = data;
    newNode->link = *head_ref;
    *head_ref = newNode;
}

void print(struct Node* head)
{
    struct Node* ptr  = head;
    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->link;
    }
}

int main()
{
    struct Node* head;
    push(&head,15);
    push(&head,14);
    push(&head,13);
    push(&head,12);
    print(head);
    return 0;
}
