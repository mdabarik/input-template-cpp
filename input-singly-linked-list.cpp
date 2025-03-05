#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int x)
{
    Node *new_node = new Node(x);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

void print_forward_list(Node *&head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    /* start::take input */
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        insert_at_tail(head, tail, x);
    }
    /* end::take input */

    print_forward_list(head);

    /* write your code here */

    return 0;
}
