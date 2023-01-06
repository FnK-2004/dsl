#include <iostream>
#include <cstdlib>
using namespace std;
struct node {
int data;
struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;
void Insert(int val) {
if (rear == NULL) {
rear = new node;
rear->next = NULL;
rear->data = val;
front = rear;
} else {
temp=new node;
rear->next = temp;
temp->data = val;
temp->next = NULL;
rear = temp;
}
}
void Delete() {
temp = front;
if (front == NULL) {
cout<<"Queue is empty!!"<<endl; } else if (temp->next != NULL) {
temp = temp->next;
cout<<"Element deleted from queue is : "<<front->data<<endl;
free(front);
front = temp;
} else {
cout<<"Element deleted from queue is : "<<front->data<<endl;
free(front);
front = NULL;
rear = NULL;
}
}
void Display() {
temp = front;
if ((front == NULL) && (rear == NULL)) {
cout<<"Queue is empty"<<endl;
return;
}
while (temp != NULL) {
cout<<temp->data<<" "; temp = temp->next;
}
cout<<endl;
}
int main() {
int choice, value;
while (1) {
cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\n";
cout<<"\nEnter your choice : ";
cin>>choice;
switch (choice) {
case 1:
cout<<"\nEnter the value to insert: ";
cin>>value;
Insert(value);
break;
case 2:
Delete();
break;
case 3:
Display();
break;
case 4:
exit(0);
break;
default:
cout<<"\nWrong Choice\n";
}
}
}

