#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 100
typedef struct
{
int ele[MAX];
int TOP;
}STACK;
STACK *s;
void pushItem(STACK *s,int ITEM)
{
if(s->TOP==MAX-1)
{ cout<<"\nSTACK is FULL.\n";return; }
s->ele[++s->TOP]=ITEM;
cout<<"\nITEM inserted successfully."<<ITEM<<"\n";
}
/* function: popItem( ), to delete an item from stack. */
void popItem(STACK *s)
{
int itm;
if(s->TOP==-1) { cout<<"\nSTACK is empty. \n";return; }
itm=s->ele[s->TOP];
s->TOP--;
cout<<"\nItem removed : %d\n"<<itm;
}
void dispItems(STACK *s)
{
int i;
if(s->TOP == -1)
{ cout<<"STACK IS EMPTY. "; return;}
for(i=s->TOP;i>=0;i--)
cout<<s->ele[i]<< " ";
cout<<"\n";
}
int main()
{
int num; char dummy;
s=(STACK*)malloc(sizeof(STACK));
s->TOP=-1;
int choice=1; 
while(choice!=0){
    cout<<"\nSTACK ELEMENTS :"; dispItems(s);

cout<<"\nSTACK OPTIONS \n0: Exit\n1: Add item\n2: Remove item \n Enter choice :::";
cin>>choice;
switch(choice)
{
case 0:
break;
case 1:
cout<<"\nEnter an item to insert:";
cin>>num;
pushItem(s,num);
break;
case 2:
popItem(s);
break;
default:
cout<<"\n Abcsn Invalid Choice !!!";
break;
}
}
}
