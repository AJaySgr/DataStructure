//Queue  Implementaion using linked list
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
} *new_node ,*Front=NULL,*Rear=NULL,*temp;
int element;
void Enqueue(){
	//Insertion  operation
	
	new_node= (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the Element : ");
	scanf("%i",&element);
	new_node->data=element;
	new_node->next=NULL;
	if(Rear==NULL){
		
		Rear=new_node;
		Front=new_node;
	}else{
		Rear->next=new_node;
		Rear=new_node;
	}
	printf("\nInsertion Done :)");
	 
}
int Dequeue(){
	//Deletion operation 
	temp=Front;
	if(Front==NULL){
		printf("\nQueue is Empty! :( ");
	}else{
		Front=Front->next;
		element=temp->data;
		free(temp);
	     printf("\n%i\a is Deleted.",element);
	}
	
}
void display(){
	temp=Front;
	if(Front==NULL){
		printf("\nQueue is Empty :(");
	}else{
		printf("\nHere the Element : \n");
		while(temp!=NULL){
			
			
			printf("\t%i\t",temp->data);
			
			temp=temp->next;
		}
	}
	
}
int main(){
	printf("\n~~~~~~~~~~~~~Queue implementaiton by using LINKEDLIST~~~~~~~~~~~~~\t\n");
	display();
	Enqueue();
	Enqueue();
	Enqueue();
	display();
	Dequeue();
	Dequeue();
	display();	
	
}
