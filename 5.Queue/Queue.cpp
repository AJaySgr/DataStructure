#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],Front=-1,Rear=-1;
void Enqueue(int queue[],int val);
int Dequeue(int queue[]);
int peek(int queue[]);
void Display(int queue[]);
int main(){
	int option ,val;
	printf("\n~~~~~~~~~~MAIN MENU OF QUEUE~~~~~~~~~~~");
	printf("\n1. INSERTION ");
	printf("\n2. DELETION ");
	printf("\n3. PEEk ");
	printf("\n4. DISPLAY ");
	printf("\n5. EXIT! ");
	
	do{
		printf("\nEnter the option : ");
		scanf("%i",&option);
		switch(option){
			case 1:	
					printf("\nEnter the Element :");
					scanf("%i",&val);
					Enqueue(queue,val);
					break;
			case 2:
					val=Dequeue(queue);
					if(val!=-1)
						printf("\nDeleted element is %i ",val);
					break;
			case 3:
					val=peek(queue);
					if(val!=-1)
						printf("\nPeek element is %i ",val);
					break;	
			case 4: 
					if(Front!=-1)
						Display(queue);
					else
						printf("\nQueue is Empty!!");
					break;
					
			
		}
		
	
	}while(option!=5);
	
	
	
	return 0;
}

void Enqueue(int queue[],int val){
	if(Rear==max-1){
		printf("\nQueue is OVERFLOW ");
	}else{
		if(Front==-1){
			Front=0;
		}
		Rear++;
		queue[Rear]=val;
		printf("\nInsertion is done :) ");
	}
}

int Dequeue(int queue[]){
	int val;
	if(Front==-1||Front>Rear){
		printf("\nQueue is UNDERFLOW");
		return -1;
	}else{
		val=queue[Front];
		Front++;
		return val;
	}
}
 int peek(int queue[]){
 	if(Front==-1||Front>Rear){
			printf("\nQueue is underflow");
			return -1;
	}else
		return queue[Front];
 }
 
 void Display(int queue[]){
 	int i;
 	printf("\nElement of QUEUE :");
 	for(i=Front;i<=Rear;i++){
 		printf("%d\t",queue[i]);
	 }
	 
 }






