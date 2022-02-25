#include <bits/stdc++.h>
using namespace std;

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
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << '\n';
    return;
}

node *inser_1(node *&head, int d)
{
    node *temp = new node(d);
    head->prev = temp;
    temp->next = head;
    return temp;
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
    head = inser_1(head, 678);
    print(head);
}