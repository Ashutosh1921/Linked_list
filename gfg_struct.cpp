#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = nullptr;
    }
    void print()
    {
        node *temp = this;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    node *head = new node(11);
    node *one = new node(12);
    node *two = new node(33);
    head->next = one;
    one->next = two;
    head->print();
}
