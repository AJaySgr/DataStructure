#include<stdio.h>
int main(){
	int i,j,temp,min,array[]={1,24,3,4,5,34,6,7,45,44,34,20,10};
	
	printf("\t\t\t~~~~~SELECTION SORT~~~~~~~~\n\n");
	printf("*Note Before sorting\n\n");
	printf("Here the Elements of Array : ");
	for(i=0;i<sizeof(array)/4;i++){
		printf("%3i",array[i]);
	}
	
	for(i=0;i<sizeof(array)/4;i++){
		min=i;
		for(j=i+1;j<sizeof(array)/4;j++){
			if(array[j]<array[min])
				min=j;
			}
			temp=array[i];
			array[i]=array[min];
			array[min]=temp;
		
	}
	
	printf("\n\nAfter sorting\n\n");
	printf("Here the Elements of Array : ");
	for(i=0;i<sizeof(array)/4;i++){
		printf("%3i",array[i]);
	}
	
	
	return 0;
}
