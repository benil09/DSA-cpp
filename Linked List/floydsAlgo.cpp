#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

bool detectCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

Node *findCycleStart(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    // first detect cycle

    do
    {
        if (!fast || !fast->next)
            return NULL;
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    // move the pointer to head;
    fast = head;

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow; // start of cycle
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // create a cycle : 5->3
    head->next->next->next->next->next = head->next->next;

    if (detectCycle(head))
    {
        cout << "cycle detected " << endl;
        Node *start = findCycleStart(head);
        cout << "Cylce start at node with value : " << start->data << endl;
    }
    else
    {
        cout << "No cylce detected" << endl;
    }

    return 0;
}