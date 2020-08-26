#include<stdio.h>
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
}
int partitioning(int a[],int lb,int ub){
	int start,end,pivot=a[lb];
	start=lb;
	end=ub;
	while(start<end){
		
		while(a[start]<=pivot){
			start++;
		}
		
		while(a[end]>pivot){
			end--;
		}
		
		if(start<end){
			swap(&a[start],&a[end]);
		}
	}
	swap(&a[lb],&a[end]);
	
	return end;

}

int quickSort(int a[],int lb,int ub){
	int vot;
	if(lb<ub){
		vot=partitioning(a,lb,ub);
		quickSort(a,lb,vot-1);
		quickSort(a,vot+1,ub);
	}
}
void printArray(int b[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf(" %d ", b[i]); 
	 
} 

int main(){
int arr[]={21,54,6,37,8,16,76,65,6,56,567,67,6,44,45,30,1,2,3,4,1000,20,200},size;
size=sizeof(arr)/4;
printf("~~~~~~~~~~~~QUICK SORT~~~~~~~~~~~~\n\n");
printf("Here the element :");
printArray(arr,size);
quickSort(arr,0,size-1);
printf("\n\nAfter the Sorting \n\n");
printArray(arr,size);


return 0;	
}
