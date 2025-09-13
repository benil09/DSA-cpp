#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int length(Node *&head)


{
    Node *curr = head;
    int cnt = 0;
    while (curr != NULL)
    {
        cnt += 1;
        curr = curr->next;
    }

    return cnt;
}


int main()
{

    Node *n1 = new Node(5);
    Node *head = n1;

    Node *n2 = new Node(10);
    n1->next = n2;

    Node *n3 = new Node(15);
    n2->next = n3;

    int n = length(head);
    cout << "The length of the linked list is : " << n << endl;
    int ans =n/2  ;
    cout << "the middle index is : " << ans<<endl;

    Node *temp = head;

    int cnt = 0;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }

    cout<< " The middle element of the list is : "<< temp->data<<endl;

    return 0;
}