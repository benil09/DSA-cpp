#include <iostream>
using namespace std;
#include <map>

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

bool detectCycle(Node *head)
{
    if (head == NULL)
        return false;

    map<Node *, bool> visited;
    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "the starting node of the loop is at : " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node *floydCycleDetectAlgo(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }

    return NULL;
}

Node *getStartNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *intersection = floydCycleDetectAlgo(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

int main()
{
    Node *n1 = new Node(5);
    Node *head = n1;

    Node *n2 = new Node(10);
    n1->next = n2;

    Node *n3 = new Node(15);
    n2->next = n3;

    Node *n4 = new Node(20);
    n3->next = n4;

    Node *n5 = new Node(25);
    n4->next = n5;
    n5->next = n3;

    // Node* temp = head;

    // while(temp != NULL){
    //     cout<<temp->data <<" ";
    //     temp=temp->next;
    // }

    bool res = floydCycleDetectAlgo(head);

    if (res)
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "No cycle is present";
    }

    return 0;
}