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
// this is how we create the
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