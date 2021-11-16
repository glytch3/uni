#include<iostream>
#include<cstring>
using namespace std;
#define MAX 1000
class Stack
{
public:
    int top;
    char a[MAX];
    Stack()
    {
        top=-1;
    }
public:
    void push(char);
    void pop();
};
void Stack::push(char e)
{
    top++;
    a[top]=e;
}
void Stack::pop()
{
    top--;
}
/*    void Stack::palindrome()
    {
    int check=0;
    if(top<0)
    {
        cout<<"No string present";
        break;
    }
    else
    {
        for(int i=0;i<(top/2);i++)
        {
            if(a[i]!=a[top])
            {
                check=1;
            }
            pop();
        }
        if(check=0)
            cout<<"The string is a palindrome";
        else
            cout<<"The string is not a palindrome";
    }
}*/
int main()
{
    Stack s;
    int flag=1,ch,x,top,i=0;
    char str,b,a[MAX];
    cout<<"Enter the string characters one at a time : ";
    do
    {
        cin>>b;
        s.push(b);
        i++;
    }
    while(b != '\0');

    for (i = 0;i < (strlen(str) / 2);i++)
    {
        if (a[top] ==a[x])
        {
            pop();
            x++;
        }
        else
        {
                    cout<<str<<" is not a palindrome";
                    break;
        }
    }
    if ((strlen(str)/2)==x)
    cout<<str<<" is a palindrome";
    x=0;
    top=-1;
}


