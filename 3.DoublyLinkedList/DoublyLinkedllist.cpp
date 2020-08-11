#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
	
}*new_node=NULL,*head,*tail,*temp;

void Creation_list(){
	char ch;
	int value;
	
	do{
		new_node=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter the value :");
		scanf("%i\a",&value);
		new_node->prev=NULL;
		new_node->data=value;
		new_node->next=NULL;
		if(head==NULL){
			head=new_node;
			tail=new_node;
		}else{
			tail->next=new_node;
			new_node->prev=tail;
			tail=new_node;
		}
		
		printf("\nEnter y for continue :");
			fflush(stdin);
		scanf("%c",&ch);
		
	}while((ch=='Y')||(ch=='y'));
}


void Insertion_Beg(){
	int value;
	printf("\nEnter the value : ");
	scanf("%d",&value);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->prev=NULL;
	new_node->data=value;
	new_node->next=head;
	head=new_node;
	
}
void Insertion_End(){
	int value;
	printf("\nEnter the value : ");
	scanf("%d",&value);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=value;
	new_node->prev=tail;
	tail->next=new_node;
    new_node->next=NULL;
	tail=new_node;
}

void Insertion_Pos(int pos){
	int i,value;
	temp=head;
	new_node=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter the value :");
		scanf("%i\a",&value);
		
		for( i=0;i<pos-1;i++)
			temp=temp->next;		
		new_node->data=value;
		new_node->next=temp->next;
		temp->next->prev=new_node;
		temp->next=new_node;
		new_node->prev=temp;
}
void Deletion_beg(){

	temp=head;
	head=head->next;
	temp->next=NULL;
	temp=head;
}

void Deletion_End(){
	//Normal logic for this operation 
	
/*	struct node *temp;
			temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->prev->next=NULL;
			tail=temp;*/
//This is my new logig for deletion at end  operation			
		temp=tail->prev;
		tail->prev->next=NULL;
		tail=temp;

}

void Deletion_Pos(){
	temp=head;
	int pos=0;
	printf("\nEnter the pos :");
	scanf("%d",&pos);
	for(int i=0;i<pos-1;i++)
		temp=temp->next;
	temp->next=temp->next->next;
	temp->next->prev=temp;
}


void Count(){
	int count=0;
	temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("\nTotall  number of Node in doubly linkedlist : %d ",count);
}

void display(){
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%i<---->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}

int main(){
	int option,pos=0;
	printf("~~~~~~~~Doubly Likedlist~~~~~~~~~");
	printf("~~~~~~~~~~~~~~~~Main Menu~~~~~~~~~~~~~~~~~");
		printf("\n1 : Create a doubly list ");
		printf("\n2 : Insert at begining ");
		printf("\n3 : Insert at Ending ");
		printf("\n4 : Insert at specified postion ");
		printf("\n5 : Delete at begining ");
		printf("\n6 : Delete at Ending ");
		printf("\n7 : Delete at specified postion ");
		printf("\n8 : count no. of node in doubly list ");
		printf("\n9 :  Display ");
		printf("\n10 or 11 : Exit!!! \n\n");

	do{
				printf("\t\n Enter your option  : ");
		scanf("%i",&option);
		switch(option){
			case 1: Creation_list();
					printf("\nDoubly LInkList is created ");
					break;
					
			case 2: if(head==NULL){
						printf("\n\nPlease create a Doubly list first!!!");
					}else{
						Insertion_Beg();
					    printf("~~~Insertion Done at Beginning~~~~\n");
					}
					break;
						
			case 3: if(head==tail){
						printf("Sorry Doubly LInklist has only Single node yet!!! :- (");
					}else{
						Insertion_End();
						printf("~~~Insertion Done at Ending~~~~\n");
						}	
					break;
						
			case 4: printf("\nEnter the postion : ");
					scanf("%i",&pos);
					Insertion_Pos(pos);
					printf("\n~~~Insertion Done at postion~~~~\n");
					break;
			
			case 5: if(head==NULL){
						printf("\nDoubly LInked List is Empty ");
						
					}else{
						Deletion_beg();
						printf("\n~~~Deletion Done at Beginning~~~~\n");
					}
					break;			
			
			case 6: if(head==NULL){
						printf("\nDoubly LInked List is Empty ");
						
					}
					else if(head==tail){
						printf("\nSorry Doubly LInklist has only Single node yet!!! :- (");
					}else{
						Deletion_End();
						printf("\n~~~Deletion Done at Ending~~~~\n");
					}
					break;		
					
			case 7: 
					Deletion_Pos();
					printf("\n~~~Deletion Done at postion~~~~\n");
					break;		
					
			case 8: Count();
					 printf("\n~~~Count operation Done~~~~\n");
					 break;		
		
			case 9: display();
					 break;	
					
			case 10: exit(0);
			dafault: printf("\n\n!!!Plz try Again :-(");			
		}
	}while(option!=11);
	
return 0;
}
	

