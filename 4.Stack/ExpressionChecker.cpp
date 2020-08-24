#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void push();
void pop();
#define max 10
char st[max],top=-1;
void push(char st[],char val);
int pop(char st[]);
void display(char st[]);
int main(){
	char c,exp[30];
	printf("EXPRESSION CHECKER  \n");
	printf("\n*Note size of Array : 30   \n");
	printf("\nEnter an expression : ");
	gets(exp);
	printf("EXPRESSION : ");
	puts(exp);
	

	for(int i=0;i<=strlen(exp);i++){
		if(exp[i]=='a' || exp[i]=='b' ||  exp[i]=='c' || exp[i]=='d' 
			|| exp[i]=='e'|| exp[i]=='+' || exp[i]=='-' 
			|| exp[i]=='*' || exp[i]=='/' || exp[i]=='%'){
				continue;
			}else{
		if(exp[i]=='('||exp[i]=='[' || exp[i]=='{'){
			push(st,exp[i]);
		}else{
				if(top!=-1){
					c=pop(st);
					if((c=='('&& exp[i]==')')||(c=='['&& exp[i]==']')||(c=='{'&& exp[i]=='}')){
						if(top==-1)
							printf("\nvalid Expresion ");
						else
							continue;		
				}else{
					printf("\n NOT valid Expresion ");
					break;
				}
			}
	}
}
}
return 0;
}

void push(char st[],char val){

			if(top==max-1){
				printf("\nSatck is Overflow");
			}else{
				top++;
				st[top]=val;
				
			}
		
}	

int pop(char st[]){
		char val;
			val=st[top];
			top--;
			return val;
			
		}


void display(char st[])
{	int i;
	if(top==-1)
		printf("\nStack is underflow");
	else{
		
		for(i=top;i>=0;i--){
			printf("%c\n",st[i]);
		}		
	}

}
