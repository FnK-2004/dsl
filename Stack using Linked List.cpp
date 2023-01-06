#include <iostream>
#include <conio.h>
using namespace std;
// Structure to create a node with data and the next pointer
struct Node {
int data;
struct Node *next;
};
Node* top = NULL;
// Push() operation on a stack
void push(int value) {
struct Node *newNode= (struct Node *)malloc(sizeof(struct Node));
newNode->data = value; // assign value to the node
if (top == NULL) {
newNode->next = NULL;
} else 
newNode->next = top; // Make the node as top
top = newNode; // top always points to the newly created node
cout<<value<<" is Inserted\n\n";
}
void pop() {
if (top == NULL) {
cout<<"\nStack Underflow\n";
} else {
struct Node *temp = top;
int temp_data = top->data;
top = top->next;
free(temp);
cout<<"Popped element is : \n"<<temp_data<<endl;
}
}
void display() {
// Display the elements of the stack
if (top == NULL) {
cout<<"\nStack Underflow\n";
} else {
cout<<"The stack is \n";
struct Node *temp = top;
while (temp != NULL) {
cout<<"  "<< temp->data;
temp = temp->next;
}
}cout<<endl;
}

int main() {
int choice, value;
cout<<"\nImplementation of Stack using Linked List\n";
while (1) {
cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\n";
cout<<"\nEnter your choice : ";
cin>>choice;
switch (choice) {
case 1:
cout<<"\nEnter the value to insert: ";
cin>>value;
push(value);
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
cout<<"\nWrong Choice\n";
}
}
}
