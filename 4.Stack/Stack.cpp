#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
#define max 5
int st[max],top=-1;
void push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int main(){
	int val,option;
	printf("\n~~~~~~~~~~MAIN MENU OF STACK~~~~~~~~~~~");
	printf("\n1. PUSH ");
	printf("\n2. POP ");
	printf("\n3. PEEk ");
	printf("\n4. DISPLAY ");
	printf("\n5. EXIT! ");
	do{
		printf("\nEnter the option : ");
		scanf("%i\a",&option);
		
		switch(option){
			case 1 :printf("\nEnter the element : ");
					scanf("%d",&val);
					push(st,val);
					break;
			case 2: val=pop(st);
					if(val!=-1)
						printf("Delelet element is %d",val);		
				   break;
			case 3:	val=peek(st);
					if(val!=-1)
						printf("peek element is %d ",val );
				   break;
			case 4: display(st);
					break;
			case 5: exit(0);
		}
		
		
	}while(option!=5);
	
	return 0;
}
void push(int st[],int val){

			if(top==max-1){
				printf("\nSatck is Overflow");
			}else{
				top++;
				st[top]=val;
				printf("\nPush operation is done");
			}
		
}	

int pop(int st[]){
		int val;
		if(top==-1){
			printf("\nStack is Underflow");
			return -1;
	    }else{
			val=st[top];
			top--;
			return val;
			
		}
}
int peek(int st[]){
	if(top==-1){
			printf("\nStack is underflow");
			return -1;
	}else
		return st[top];
}
void display(int st[])
{	int i;
	if(top==-1)
		printf("\nStack is underflow");
	else{
		
		for(i=top;i>=0;i--){
			printf("%d\n",st[i]);
		}		
	}

}                                                                                                  
