#include <iostream>
using namespace std;
;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // deconstructor
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory Free " << val << endl;
    }
};

void InsertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int val)
{
    // if list is empty
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    else
    {
        // list is non empty
        // assume that the value is present in the linked list
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != val)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // 1 node deletion linked list
        if (curr == prev)
        {
            tail = NULL;
        }
        // >=2 node deletion linked list ke liye
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{

    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}
int main()
{
    Node *tail = NULL;

    // empty list me insert kree hai
    InsertNode(tail, 5, 3);
    print(tail);

    InsertNode(tail, 3, 5);
    print(tail);

    InsertNode(tail, 5, 7);
    print(tail);

    InsertNode(tail, 7, 9);
    print(tail);

    InsertNode(tail, 5, 6);
    print(tail);

    InsertNode(tail, 9, 10);
    print(tail);

    InsertNode(tail, 3, 4);
    print(tail);

    // deleteNode(tail, 3);
    print(tail);
    deleteNode(tail, 10);
    print(tail);

    return 0;
}