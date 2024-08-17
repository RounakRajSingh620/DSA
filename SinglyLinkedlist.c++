#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // created node
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    // Node *node2 = new Node(20);
    // cout << node2->data << endl;
    // cout << node2->next << endl;

    // head points to node1
    Node *head = node1;
    print(head);

    InsertAtHead(head, 20);
    print(head);
    InsertAtHead(head, 30);
    print(head);

    return 0;
}