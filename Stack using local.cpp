#include <iostream>
#include <conio.h>
using namespace std;

#define MAX 10
void display(int stack[], int TOP)
{
int i=0;
if(TOP==-1)
{
cout<<"Stack is Empty .\n";
return;
}
cout<<stack[TOP];
for(i=TOP-1;i >=0;i--)
{
cout<<"\n"<<stack[i];
}
cout<<"\n\n";
}
/* function : PUSH(),
to push an item into stack.
*/
void PUSH(int stack[],int item, int *TOP)
{
if(*TOP==MAX-1)
{
cout<<"\nSTACK is FULL CAN't ADD ITEM\n";
return;
}
(*TOP)=(*TOP)+1;
stack[*TOP]= item;
}
void POP(int stack[], int *TOP)
{
int deletedItem;
if((*TOP)==-1)
{
cout<<"STACK is EMPTY.\n";
return;
}
deletedItem=stack[*TOP];
(*TOP)--;
cout<<"deleted successfully\n"<<deletedItem;
return;
}

int main()
{
int STACK[MAX],TOP;
int ITEM=0;
int choice=0;
TOP=-1;
while(1)
{
cout<<"\n Enter Choice (1: display, 2: insert (PUSH), 3:remove(POP)), 4: Exit..:";
cin>>choice;
switch(choice)
{
case 1:
display(STACK, TOP);
break;
case 2:
cout<<"Enter Item to be insert :";
cin>>ITEM;
PUSH(STACK,ITEM, &TOP);
break;
case 3:
POP(STACK, &TOP);
break;
case 4:
exit(0);
default:
cout<<"\nInvalid choice.";
break;
}
getch();
}// end of while(1)
}
