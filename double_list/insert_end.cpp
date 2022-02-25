#include <bits/stdc++.h>
using namespace std;
// insert element at the end of doubly list.
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

void insert_1(node *head, int d)
{
    node *temp = new node(d);
    if (head->next == nullptr)
    {
        head->next = temp;
        return;
    }
    insert_1(head->next, d);
}
// inserting last element at end of the doubly list.

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
    insert_1(head, 999);
    print(head);
}