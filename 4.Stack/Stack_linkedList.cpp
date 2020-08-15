//Stack  Implementaion using linked list
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
} *new_node ,*top=NULL,*temp;
int element;
void push(){
	//Insertion  operation
	
	new_node= (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the Element : ");
	scanf("%i",&element);
	new_node->data=element;
	if(top==NULL){
		new_node->next=NULL;
		top=new_node;
	}else{
		new_node->next=top;
		top=new_node;
	}
	printf("\nInsertion Done :)");
	 
}
int pop(){
	//Deletion operation 
	temp=top;
	if(top==NULL){
		printf("\nStack is Empty! :( ");
	}else{
		top=top->next;
		element=temp->data;
		free(temp);
	     printf("\n%i\a is Deleted.",element);
	}
	
}
void display(){
	temp=top;
	int i=1;
	if(top==NULL){
		printf("\nStack is Empty :(");
	}else{
		printf("\nHere the Element : \n");
		printf("\nSr no.|\tElement |\tAddress\n");
		while(temp!=NULL){
			printf("\n %i    ",i++);
			printf("|");
			printf("\t%i\t",temp->data);
			printf("|");
			printf("\t%i\n",temp->next);			
			temp=temp->next;
		}
	}
	
}
int main(){
	printf("\n~~~~~~~~~~~~~Stack implementaiton by using LINKEDLIST~~~~~~~~~~~~~\t\n");
	push();
	push();
	push();
	push();
	display();
	pop();
	pop();
	display();
	
	
}
