#include<stdlib.h>
#include<stdio.h>
struct node{
	int data;
	struct node *next;
}*head,*tail;
struct node *new_node=NULL;

void create_ll(){
	int n;
	char ch='y';
	do{
	
				new_node=(struct node *)malloc(sizeof(struct node));
				printf("Enter the data :");
				scanf("%d",&new_node->data);
				new_node->next=NULL;
						if(head==NULL){
								head=new_node;
								tail=new_node;
						}else{
								tail->next=new_node;
								tail=new_node;
						}
						
			printf("Enter y for continue :");
			fflush(stdin);
			scanf("%c",&ch);
	}while(ch=='y' || ch=='Y');
	}

void InsertAtBeg(){
		 	int value;
		 	struct node *new_node;
		 	new_node=(struct node *)malloc(sizeof(struct node));
		 	printf("\n\nInsert At begining ");
		 	printf("\nEnter the value of ll :" );
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
		 	printf("\nEnter the value of ll :" );
		 	scanf("%i",&value);
		 	new_node->data=value;
		 	new_node->next=NULL;
		 	tail->next=new_node;
		 	tail=new_node;
 		}
 		
 void InsertAtSpecificPos(int pos){
 	
		 	struct node *temp;
		 	temp=head;
			int value,i;
		 	new_node=(struct node *)malloc(sizeof(struct node));
		 	printf("\n\nEnter the value of node :");
		 	scanf("%i",&value);
		 	for(i=0;i<pos-1;i++){
		 		temp=temp->next;
		 	new_node->data=value;
		 	new_node->next=temp->next;
		 	temp->next=new_node;}
	   }		


void DeleteAtBeg(){
	
			struct node *temp;
			temp=head;
			head=head->next;
			temp->next=NULL;
			
		}
		
		
void DeleteAtEnd(){
	
			struct node *temp,*h;
			temp=head;
			while(temp->next!=NULL){
				h=temp;
				temp=temp->next;
					}
					
			h->next=NULL;
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
			while(temp!=NULL){
				count++;
				temp=temp->next;
				}
	
			printf("\n\nTotal node in linklist : %i ",count);
	
	    }
	    
void Reverse_ll(){
			struct node *next,*current,*prev=NULL;
			current=head;
			while(current!=NULL){
				next=current->next;
				current->next=prev;
				prev=current;
				current=next;
					}
					
			head=prev;
		
		}
		
void SortLinkedList(){
			struct node *a,*b;
			int temp;
			a=head;
			while(a->next!=NULL){
				b=a->next;
				while(b!=NULL){
					if(a->data>b->data){
						temp=a->data;
						a->data=b->data;
						b->data=temp;	
					}
					b=b->next;
				}
				a=a->next;	
			}	
}	
				
void display(){
	
			struct node *new_node;
			new_node=head;
			printf("\n\nThe Linklist : ");
			while(new_node!=NULL){
			printf("%d---->",new_node->data);
			new_node=new_node->next;
			}
			
	printf("NULL\n\n");
	
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
		printf("\n8 : Sort the  list ");
		printf("\n9 : Reverse the list ");
		printf("\n10 : count no. of node in list ");
		printf("\n11 :  Display ");
		printf("\n12 OR 13 : Exit!!! ");

	do{
				printf("\n\n\n Enter your option  : ");
		scanf("%i",&option);
		switch(option){
			case 1: create_ll();
					printf("\nLInkList is created ");
					break;
					
			case 2: if(head==NULL){
						printf("\n\nPlease create a list first!!!");
					}else{
						InsertAtBeg();
					    printf("~~~Insertion Done at Beginning~~~~\n");
					}
					break;
						
			case 3: if(head==tail){
						printf("Sorry LInklist has only Single node yet!!! :- (");
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
			
			case 5: if(head==NULL){
						printf("LInked List is Empty ");
						
					}else{
						DeleteAtBeg();
						printf("\n~~~Deletion Done at Beginning~~~~\n");
					}
					break;			
			
			case 6: if(head==tail){
						printf("Sorry LInklist has only Single node yet!!! :- (");
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
					
			case 8: SortLinkedList();
					printf("\n~~~Sort Operation Done ~~~~\n");
					break;		
		
			case 9: Reverse_ll();
					printf("\n~~~Reverse operation Done ~~~~\n");
					break;		
					
			case 10: count();
					 printf("\n~~~Count operation Done~~~~\n");
					 break;		
					
			case 11: display();
					 break;
			case 12: exit(0);
			dafault: printf("\n\n!!!Plz try Again :-(");			
		}
	}while(option!=13);
	
return 0;
}

