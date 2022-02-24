#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    node *head = new node(10);
    node *one = new node(69);
    node *two = new node(200);
    head->next = one;
    one->next = two;
    print(head);
}
