#include<iostream>
using namespace std;
int n, choice,top,x,i;
int* stack;
void push()
{
    if(top>=n-1)
    {
        cout<<"Stack overflow. Size is doubled."<<"\n";
        n=n*2;
        int* newStack = new int[n];
        for(int i=0; i<n;i++) {
            newStack[i] = stack[i];
        }
        delete[] stack;
        stack = newStack;
    }
    cout<<" Enter a value to be pushed:";
    cin>>x;
    top++;
    stack[top]=x;
}
void pop()
{
    if(top<=-1)
    {
        cout<<"\n\t Stack is under flow";
    }
    else
    {
        cout<<"\n\t The popped elements is "<<stack[top];
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"\n The elements in STACK \n";
        for(i=top; i>=0; i--)
        cout<<"\n "<<stack[i];
        cout<<"\n Press Next Choice";
    }
    else
    {
        cout<<"\n The STACK is empty";
    }
}

int main()
{
    n=1;
    stack=new int[n];
    top=-1;
    cout<<"\n"<< "Enter the size of STACK";
    cin>>n;choice=1;
     do
    {
        cout<<"\n\t"<<" STACK OPERATIONS USING ARRAY";
        cout<<"\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT";
        cout<<"\n Enter the Choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
            push();
            break;
            }
            case 2:
            {
            pop();
            break;
            }
            case 3:
            {
            display();
            break;
            }
            case 4:
            {
            cout<<"\n\t EXIT POINT ";
            break;
            }
            default:
            {
            cout<<"\n\t Please Enter a Valid Choice(1/2/3/4)";
            }
        }
    }
    while(choice!=4);
    return 0;
}

