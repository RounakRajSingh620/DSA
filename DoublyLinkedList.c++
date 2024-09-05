#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
// traversing the linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// give length of linked list
int getlength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void InsertatPos(Node *&tail, Node *&head, int pos, int d)
{
    // inserting at first position
    if (pos == 1)
    {
        InsertAtHead(head, tail, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, head, d);
        return;
    }

    // inserting at any pos
    // create a node for d

    Node *nodetoInsert = new Node(d);
    nodetoInsert->next = temp->next;
    temp->next->prev = nodetoInsert;
    temp->next = nodetoInsert;
    nodetoInsert->prev = temp;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    print(head);

    InsertAtHead(head, tail, 11);
    print(head);
    InsertAtHead(head, tail, 13);
    print(head);
    InsertAtHead(head, tail, 8);
    print(head);

    InsertAtTail(tail, tail, 25);
    print(head);

    InsertatPos(tail, head, 2, 100);
    print(head);
    InsertatPos(tail, head, 1, 101);
    print(head);
    InsertatPos(tail, head, 7, 102);
    print(head);

    return 0;
}
