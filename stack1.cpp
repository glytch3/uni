#include<iostream>
using namespace std;
#define MAX 1000
class Stack
{
public:
    int top;
    int a[MAX];
    Stack()
    {
        top=-1;
    }
public:
    void push(int);
    void pop();
    void topele();
    void isEmpty();
    void display();
};
void Stack::push(int e)
{
    if(top>=(MAX - 1))
    {
        cout<<"Stack Overflow";
    }
    else
    {
        a[++top]=e;
        cout<<e<<" is Pushed into Stack\n";
    }
}
void Stack::pop()
{
    if(top<0)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        int e=a[top];
        top--;
        cout<<e<<" is Popped from the Stack\n";

    }
}
    void Stack::topele()
    {

            if(top<0)
            {
                cout<<"Stack is empty";
            }
            else
            {
                int e=a[top];
                cout<<"The top Element of Stack is "<<e<<"\n";
            }

    }
    void Stack::isEmpty()
    {
        if(top<0)
        {
            cout<<"the Stack is Empty\n";
        }
        else
        {
            cout<<"The Stack is not empty\n";
        }
    }
    void Stack::display()
    {
        if(top>=0)
        {
            cout<<"\nStack elements are: \n";
            for(int i=top;i>=0;i--)
                cout<<a[i]<<" ";
        }
        else
            cout<<"Stack is empty";
    }
int main()
{

    Stack s;
    int flag=1, n, ch,n2;
    while(flag == 1)
    {
        cout<<"Enter the element: ";
        cin>>n;
        s.push(n);
        cout<<"\nDo u want to enter again: (1 for Yes, 0 for no) : ";
        cin>>ch;
        if(ch==0)
            flag=0;
    }
    cout<<"How many  elements u want to pop: ";
    cin>>n2;
    for(int i=0;i<n2;i++)
        s.pop();
    s.display();
    s.topele();
    s.isEmpty();
}

