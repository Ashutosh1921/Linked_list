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

void print(node *&head)
{

    if (head == nullptr)
    {
        return;
    }
    else
    {
        cout << head->data << " ";

        print(head->next);
    }
}
// insert method 1.
void insert(int t, node *head)
{
    node *temp2 = head->next;
    node *temp = new node(t);
    temp->next = temp2;
    int x = head->data;
    head->data = temp->data;
    temp->data = x;

    head->next = temp;
}
// insert method 2.
node *insert_2(int t, node *head)
{
    node *temp = new node(t);
    temp->next = head;
    return temp;
}
// both insert functions are working fine
// but the 2nd one is very good and simple
// to understand.

int main()
{
    node *head = new node(55);
    head->next = new node(66);
    head->next->next = new node(88);
    head = insert_2(1222, head);
    print(head);
    cout << '\n';
    insert(999, head);
    print(head);
}