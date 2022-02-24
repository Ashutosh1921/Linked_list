#include <bits/stdc++.h>
using namespace std;
// Delete Last of Singly Linked List

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = nullptr;
    }
};
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *delete_last(node *&head)
{

    if (head == nullptr)
    {
        cout << "List is already empty\n";
        return NULL;
    }
    if (head->next == nullptr)
    {
        // deleting head from the heap memory
        delete (head);
        head = nullptr;
        cout << "Last element removed.\n";
        return NULL;
    }
    node *temp = head;
    node *temp1 = head;
    while (temp->next != nullptr)
    {
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = nullptr;
    delete (temp);
    return temp1;
}

int main()
{
    node *head = new node(33);
    head->next = new node(44);
    head->next->next = new node(55);
    head->next->next->next = new node(66);
    print(head);
    cout << '\n';
    delete_last(head);
    print(head);
}