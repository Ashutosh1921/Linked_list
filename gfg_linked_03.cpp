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
// here i have added element from the end
// this is how used a recrusive function
void from_end(node *head, int d)
{
    node *temp = new node(d);
    if (head->next == nullptr)
    {
        head->next = temp;
        return;
    }
    from_end(head->next, d);
}

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
    head->next = new node(33);
    head->next->next = new node(55);
    from_end(head, 999);
    print(head);
}
