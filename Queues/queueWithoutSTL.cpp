#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // enqueue
    void enqueue(int value)
    {
        if (rear == size)
        {
            cout << "queue is full" << endl;
            return;
        }
        else
        {
            arr[rear] = value;
            rear++;
        }
    }
    int dequeue()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;

            if (front == rear)
            {
                front = 0;
                rear = 0;
            }

            return ans;
        }
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getFront()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue q(5);
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);

    cout << "the front element of queue is : " << q.getFront() << endl;
    q.dequeue();
    cout << "the front element of queue is : " << q.getFront() << endl;
    cout << "the queue is empty or not : " << q.isEmpty() << endl;

    return 0;
}