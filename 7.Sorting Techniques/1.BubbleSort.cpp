#include<stdio.h>
int main(){
	int i,j,temp,b[]={15,38,87,43,21,46,53,34,24,2,56};
	
	//for Printing the elements

	printf("Here the Elements\n\a ");
	printf("a[]={");
	for(i=0;i<sizeof(b)/4;i++){
		printf("%i\a,",b[i]);
	}
	printf("}\n\a");	
	
	//for Sorting the Elements
    	for(i=0;i<sizeof(b)/4;i++){
		for(j=0;j<sizeof(b)/4-i-1;j++){
				if(b[j]>b[j+1]){
						temp=b[j+1];
						b[j+1]=b[j];
						b[j]=temp;
			}	
		}
}	

	
	printf("Sorted Elements : ");
	for(int i=0;i<sizeof(b)/4;i++){
		printf("%4i\a",b[i]);
	}	
	return 0; 
}

