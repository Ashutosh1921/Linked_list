#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // creating constructor.
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        cout << temp->next;
    }
    cout << '\n';
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);
    insertAthead(head, 34);
    print(head);
}
