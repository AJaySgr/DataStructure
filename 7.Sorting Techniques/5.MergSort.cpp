#include<stdio.h>
void printArray(int array[],int size){
	printf("\nHere the Elements : ");
	for(int i=0;i<size;i++){
		printf("%3i",array[i]);
	}
	
}

void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	/* create temp arrays */
	int L[n1], R[n2]; 

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j]; 

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = l; // Initial index of merged subarray 
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
			arr[k] = L[i]; 
			i++; 
		} 
		else { 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	/* Copy the remaining elements of L[], if there 
	are any */
	while (i < n1) { 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	/* Copy the remaining elements of R[], if there 
	are any */
	while (j < n2) { 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 


void mergeSort(int array[],int lb,int ub){
		int mid;
		if(lb<ub){
		
		mid=(lb+(ub-1))/2;
		mergeSort(array,lb,mid);	
		mergeSort(array,mid+1,ub);
		merge(array,lb,mid,ub);
		
		}
}

int main(){
	int a[]={30,20,50,60,70,40,10},size;
	int low=0;
	size=sizeof(a)/4;
	printf("~~~~~~~~~~~~~~~~MERGE SORT~~~~~~~~~~~~~~~\n");
	printf("Before Sorting Array \n\n");
	printArray(a,size);
	mergeSort(a,low,size-1);
	printf("\nAfter Sorting Array \n\n");
	printArray(a,size);
	return 0;


}
