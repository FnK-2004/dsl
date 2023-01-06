#include <iostream>
#include <cstdlib>
using namespace std;
void push(int stack[], int *top)
{
	if(*top>=2)
	cout<<"Overflow";
	else
	{
		int x;
		cout<<" Enter a value to be pushed:";
cin>>x;
*top=*top+1;
stack[*top]=x;
cout<<(*top);
}
}
void pop(int stack[], int *top)
{
	if(*top==-1)
	{
		cout<<"Underflow";
	}
	else
	{
		*top--;
	}
}
void display(int stack[], int top)
{
	if(top==-1)
		cout<<"Underflow";
		else{
	for(int i=top;i>=0;i--)
	{
		cout<<stack[i];
	}}
}
int main()
{
	int stack[3];
	int choice, val, top=-1;
	do{
	cout<<"Enter 1 for push, 2 for pop, 3 for display, 4 to exit";
	cin>>choice;
	switch(choice)
	{
		case 1:
			push(stack, &top);
			break;
		case 2: 
			pop(stack, &top);
			break;
		case 3:
			display(stack, top);
			break;
		case 4:
			exit(0);
			break;
		default:
			cout<<"invalid Input. Please Enter Again";
	}
	}while(choice!=4);
}
