#include <iostream>
using namespace std;

class Stack
{
    // data members
    public:
    int *arr;
    int top;
    int size;

    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    public:
    void push(int data)
    {
        if (size - top > 0)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top > 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow";
        }
    }

    int peek()
    {
        if (top > 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty";
            return -1;  
        }
    }

    bool isEmpty()
    {
        if (top < 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{


    Stack st(5);

    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(9);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    cout<<st.isEmpty();
    return 0;
}