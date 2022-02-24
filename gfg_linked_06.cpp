#include <bits/stdc++.h>
using namespace std;
// Insert at given position in Singly Linked List

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

node *insert_point(node *head, int pos, int d)
{
    node *temp = new node(d);
    node *temp1 = nullptr;
    if (pos == 1)
    {
        //  node *temp = new node(d);
        temp->next = head;
        return temp;

        // return temp1;
    }
    pos = pos - 1;

    while (pos--)
    {
        temp1 = head->next;
        if (pos == 0)
        {
            temp->next = temp1;
            head->next = temp;
        }
        head = head->next;
    }
    return head;
}

int main()
{
    node *head = new node(33);
    head->next = new node(44);
    head->next->next = new node(55);
    head->next->next->next = new node(66);
    print(head);
    cout << '\n';
    insert_point(head, 4, 565);
    print(head);
}