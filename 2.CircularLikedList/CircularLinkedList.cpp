#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node {
	int data;
	struct node *next;
}*new_node=NULL,*head,*tail;
void create_circularLinedList(){
	int value;
	char ch;
	do{
		new_node=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter the value :");
		scanf("%i",&value);
		new_node->data=value;
		new_node->next=NULL;
		if(head==NULL){
			head=new_node;
			tail=new_node;
		
	}else{
		tail->next=new_node;
		tail=new_node;
		tail->next=head;
	}
	fflush(stdin);
	printf("\n\nEnter y to continue :");
	scanf("%c",&ch);
}while(ch =='y');
}

void InsertAtBeg(){
		 	int value;
		 	struct node *new_node;
		 	new_node=(struct node *)malloc(sizeof(struct node));
		 	printf("\nInsert At begining ");
		 	printf("\nEnter the value  :" );
		 	scanf("%i",&value);
		 	new_node->data=value;
		 	new_node->next=head;
		 	head=new_node;
		 	
		 	
 	
 		}
 		
 
 void InsertAtEnd(){
 	
		 	int value;
		 	struct node *new_node;
		 	new_node=(struct node *)malloc(sizeof(struct node));
		 	printf("\n\nInsert At Ending ");
		 	printf("\nEnter the value of node :" );
		 	scanf("%i",&value);
		 	new_node->data=value;
		 	new_node->next=head;
		 	tail->next=new_node;
		 	tail=new_node;
 		}
 		
 void InsertAtSpecificPos(int pos){
 	
		 	struct node *temp;
		 	temp=head;
			int value,i;
		 	new_node=(struct node *)malloc(sizeof(struct node));
		 	printf("\nEnter the value of node :");
		 	scanf("%i",&value);
		 	for(i=0;i<pos-1;i++){
		 		temp=temp->next;
		 	}
		 	new_node->data=value;
		 	new_node->next=temp->next;
		 	temp->next=new_node;
	   }		


void DeleteAtBeg(){
	
			struct node *temp;
			temp=head;
			head=head->next;
			temp->next=NULL;
			
		}
		
		
void DeleteAtEnd(){
	
			struct node *temp;
			temp=head;
			while(temp->next!=tail)
				temp=temp->next;
			temp->next=head;
			tail=temp;	
		}
void DeleteAtSpecificPos(int pos){
	
		 	struct node *temp;
		 	temp=head;
			for(int i=0;i<pos-1;i++){
				temp=temp->next;
					}
					
			temp->next=temp->next->next;
			
 		}		


void count(){
			struct node *temp;
			int count=0;
			temp=head;
			while(temp!=tail){
				count++;
				temp=temp->next;
				}
	
			printf("\n\nTotal node in circular linklist : %i ",count+1);
	
	    }
	    
	
				
void Display(){
	struct node *temp;
	temp=head;
	printf("\t\t~~~~~~~~Here the Circular LikedList~~~~~~~~~~~~~~\n ");
	while(temp!=tail){
		printf("%d--->",temp->data);
		temp=temp->next;
		}
	printf("%d\n",temp->data);
}
	 
int main(){
	int option,pos;
	printf("~~~~~~~~~~~~~~~~Main Menu~~~~~~~~~~~~~~~~~");
		printf("\n1 : Create a list ");
		printf("\n2 : Insert at begining ");
		printf("\n3 : Insert at Ending ");
		printf("\n4 : Insert at specified postion ");
		printf("\n5 : Delete at begining ");
		printf("\n6 : Delete at Ending ");
		printf("\n7 : Delete at specified postion ");
		printf("\n8 : count no. of node in list ");
		printf("\n9 :  Display ");
		printf("\n10 : Exit!!! \n\n");

	do{
				printf("\t\n Enter your option  : ");
		scanf("%i",&option);
		switch(option){
			case 1: create_circularLinedList();
					printf("\nCircular LInkList is created ");
					break;
					
			case 2: if(head==tail){
						printf("\n\nPlease create a list first!!!");
					}else{
						InsertAtBeg();
					    printf("~~~Insertion Done at Beginning~~~~\n");
					}
					break;
						
			case 3: if(head==tail){
						printf("Sorry circular LInklist has only Single node yet!!! :- (");
					}else{
						InsertAtEnd();
						printf("~~~Insertion Done at Ending~~~~\n");
						}	
					break;
						
			case 4: printf("\nEnter the postion : ");
					scanf("%i",&pos);
					InsertAtSpecificPos(pos);
					printf("\n~~~Insertion Done at postion~~~~\n");
					break;
			
			case 5: if(head==tail){
						printf("Circular LInked List is Empty ");
						
					}else{
						DeleteAtBeg();
						printf("\n~~~Deletion Done at Beginning~~~~\n");
					}
					break;			
			
			case 6: if(head==tail){
						printf("Sorry Circular LInklist has only Single node yet!!! :- (");
					}else{
						DeleteAtEnd();
						printf("\n~~~Deletion Done at Ending~~~~\n");
					}
					break;		
					
			case 7: printf("Enter the postion :");
					scanf("%i",&pos);
					DeleteAtSpecificPos(pos);
					printf("\n~~~Deletion Done at postion~~~~\n");
					break;		
					
			case 8: count();
					 printf("\n~~~Count operation Done~~~~\n");
					 break;		
		
			case 9: Display();
					 break;	
					
			case 10: exit(0);
			dafault: printf("\n\n!!!Plz try Again :-(");			
		}
	}while(option!=13);
	
return 0;
}








