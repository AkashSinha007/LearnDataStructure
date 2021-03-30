/*
Implement stack from scratch
*/

/*
Implementing stack using array
*/

#include <bits/stdc++.h>
 
using namespace std;
 
#define MAX 1000

class Stack
{
    int top;
public:
    int a[MAX];  //Maximum size of stack
    Stack() {top=-1;}
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();

};

bool Stack::push(int x)
{
    if(top>=MAX-1)
    {
        cout<<"Stack overflow";
        return false;
    }
    else
    {
        a[++top]=x;
        cout<<"\n"<<x<<" pushed into stack";
        return true;
    }
    
}

int Stack::pop()
{
    if(top<0)
    {
        cout<<"\n Stack underflow";
        return 0;
    }
    else
    {
        int x=a[top--];
        return x;
    }
    
}

int Stack::peek()
{
    if(top<0)
    {
        cout<<"Stack is empty";
        return 0;
    }
    else
    {
        int x= a[top];
        return x;
    }
    
}

bool Stack::isEmpty()
{
    return (top<0);
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"\n"<<s.pop()<<" Popped from stack\n";

    //Print all elements in stack..
    while(!s.isEmpty())
    {
        // print top element in stack
        cout<<s.peek()<<" ";
        // remove top element in stack
        s.pop();
    }

    return 0;
}