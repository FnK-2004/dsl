#include <iostream>
using namespace std;
typedef struct{
   int q[10];
   int rear;
   int front;
}queue;
queue *u;
void insertion(){
   int value;
   cout<<"Enter value to be inserted:";
   cin>>value;
   if(u->rear>8)
    cout<<"Queue overflow";
   else
   {
    u->q[++u->rear]=value; 
    cout<<u->q[u->rear];
    cout<<u->rear;
   }
}

void deletion(){
   if(u->rear==-1)
    cout<<"Queue is empty";
   else{
    u->front++;
   }
}

void display(){
  if((u->rear)>0){
      for(int i=u->front;i<=u->rear;i++){
    cout<<u->q[i]<<" ";
  }}
  else
{
       cout<<"queue is empty";
}
}


int main()
{
    u=(queue*)malloc(sizeof(queue));
u->rear=-1; u->front=0;
int choice=0;
do{
cout<<"\nWelcome to the queue: \n"<<"Make your choice based on the options given below \n"<<"1.insertion \n2.deletion \n3.display \n4.Exit\n\n";
cin>>choice;

switch(choice){
   case 1:
    insertion();
    break;
   case 2:
    deletion();
    break;
   case 3:
    display();
    break;
   case 4:
   cout<<"EXIT";
   break;
   default:
    cout<<"Choose a valid option";
    break;
}

}while(choice!=4);
}


