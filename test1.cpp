#include <iostream>
#include <cstdlib>
using namespace std;
int stack[3];
int choice, val, top=-1, temp, n=3;
void push()
{
	if(top>=n-1)
	cout<<"Overflow";
	else
	{
	cout<<"Enter value to be inserted";
	cin>>val;
	top++;
	stack[top]=val;
	cout<<stack[top-1];
}
}
void pop()
{
	if(top==-1)
	{
		cout<<"Underflow";
	}
	else
	{
		top--;
	}
}
void display()
{
	for(int i=top;i>=0;i--)
	{
		cout<<stack[top];
	}
}
int main()
{
	do{
	cout<<"Enter 1 for push, 2 for pop, 3 for display, 4 to exit";
	cin>>choice;
	switch(choice)
	{
		case 1:
			push();
			break;
		case 2: 
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout<<"invalid Input. Please Enter Again";
	}
	}while(choice!=4);
}
/*
#include <iostream>
#include <stdlib>
using namespace std;
void pop(0)
{}
void push(0)
{}
void display(0)
{}
int main()
{
	do{
	cout<<"Enter 1 for push, 2 for pop, 3 for display, 4 to exit";
	cin>>choice;
	switch(choice)
	{
		case 1:
			push();
			break;
		case 2: 
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout<<"invalid Input. Please Enter Again";
	}
	}while(choice!=4)
}
*/
