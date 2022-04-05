#include <bits/stdc++.h>
using namespace std;
// we have to reverse the doubly list.
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

node *swaping(node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    node *temp = head;
    node *temp1 = temp->next;
    while (temp1 != nullptr)
    {
        temp1->prev = temp1->next;
        // ab aage samajh nhi aara h
    }
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
}