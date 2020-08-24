#include<stdio.h>
int main(){
	int i,element,j,found,pos,a[]={15,38,87,43,21,46,53,34,24,2,56};

	printf("Here the Elements\n\a ");
	printf("a[]={");
	
	for(i=0;i<sizeof(a)/4;i++){
		printf("%i\a ",a[i]);
			}
	printf("}\n\a");
	
	printf("Enter the Element to be find :");
	scanf("%i",&element);
	//printf("elemrnts =%d",element);
	for(i=0;i<sizeof(a)/4;i++){
		if(a[i]==element){
			found=0;
			pos=i;
			break;
		}else{
		
			found=1;
	}
	}
	if(found==0){
		printf("This is the element %i  at position pos %i",a[pos],pos+1);
	}else{
		printf("Check your data once !!\ntry Again");
	}
	return 0;
}
