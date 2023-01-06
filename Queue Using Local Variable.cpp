#include <iostream>
#define MAX 10
using namespace std;

void display(int [], int ,int);
/* push (insert) item into stack*/
void insrt(int [],int, int *,int *);
/* pop (remove) item from stack*/
void delte(int [], int*, int *);
int main()
{
int QUEUE[MAX],REAR,FRNT ;
/* display stack element*/
int ITEM=0;
int choice=0;
REAR=-1;
FRNT = -1;
while(choice != 4)
{

cout<< "QUEUE IMPLEMENTATION \n1: display \n2: insert (PUSH) \n3: remove(POP) \n4: Exit \nEnter choice : ";
cin>> choice;
switch(choice)
{
case 1:
     display(QUEUE, FRNT, REAR);
     break;
case 2:
     cout<< "Enter item to be insert :";
     cin>> ITEM;
     insrt(QUEUE,ITEM, &FRNT, &REAR);
      break;
case 3:
      delte(QUEUE, &FRNT, &REAR);
      break;
case 4:
      exit(0);
default:
      cout<< "\nInvalid choice.";
break;
}
} // end of while(1)
}
/* function : display(),
to display stack elements.
*/
void display(int queue[], int frnt, int rear)
{
int i=0;
if(rear == -1)
{
cout<< "Queue is Empty .\n";
return;
}

for(i=rear;i >=frnt;i--)
{
cout<< "\n" << queue[i];
}
cout<< "\n\n";
}
/* function : PUSH(),
to push an item into stack.
*/
void insrt(int queue[],int item, int *FRNT, int *REAR)
{
if(*REAR>=MAX-1)
{
cout<< "\nQUEUE is FULL CAN'T ADD ITEM\n";
return;
}

(*REAR)++;
if (*FRNT == -1) {(*FRNT)=0;}
queue[*REAR]=item;

}
/* function : POP(),
to pop an item from stack.
*/
void delte(int queue[], int *FRNT, int *REAR)
{
int deletedItem;
if(*REAR < *FRNT)
{
cout<< "QUEUE is EMPTY.\n";
return;
}
deletedItem=queue[*FRNT];
*FRNT=*FRNT+1;
cout<< "deleted successfully\n" << deletedItem;
return;
}

