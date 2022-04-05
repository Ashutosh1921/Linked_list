#include <bits/stdc++.h>
using namespace std;
// here we have to insert node at given position.
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int d)
    {
        data = d;
        prev = nullptr;
        next = nullptr;
    }
};

void print(node *head)
{
    if (head == nullptr)
    {
        cout << "this linked list is empty\n";
        return;
    }
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << '\n';
    return;
}

void insert(node *head, int pos, int data)
{
    if (head == nullptr)
    {
        head = new node(data);
    }

    node *temp = head;
    while (pos != 1)
    {
        temp = temp->next;
    }
    node *temp1 = temp->next;
    temp->next = new node(data);
}

int main()
{
    node *head = new node(12);
    node *one = new node(14);
    node *two = new node(45);
    head->next = one;
    one->prev = head;
    one->next = two;
    two->prev = one;
    print(head);
    insert(head, 1, 456);
    print(head);
}
