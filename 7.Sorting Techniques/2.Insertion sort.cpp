#include<stdio.h>
int main(){
	int i,j,temp,a[]={15,45,2,56};

	printf("Here the Elements\n\a ");
	printf("a[]={");
	for(i=0;i<sizeof(a)/4;i++){
		printf("%i\a ",a[i]);
			}
	printf("}\n\a");
	
	printf("Insertion Sort  \n");
	
	for(i=1;i<sizeof(a)/4;i++){
		temp=a[i];
		for(j=i;j>0 && temp<a[j-1];j--){
			
			a[j]=a[j-1];
		}
		a[j]=temp;
	}
	printf("Here the Sorted Elements\n\a ");
	printf("a[]={");
	for(i=0;i<sizeof(a)/4;i++){
		printf("%i\a ",a[i]);
			}
	printf("}\n\a");
	
	
	return 0;
}
