#include<stdio.h>
#include<math.h>
int main(){
	int i,j,low=0,key,high,mid,found,a[]={10,20,30,40,50,60,70,80};
	high=sizeof(a)/4;

	//Priting the Elements of Array
	printf("Here the Elements\n\a ");
   	printf("\n*Note Data is already sorted\n ");
   	printf("a[]={");
	
	for(i=0;i<sizeof(a)/4;i++){
		printf("%i\a ",a[i]);
			}
	printf("}\n\a");
	//Give an element to be searched
	printf("Enter the Element to be find :");
	scanf("%i",&key);
	
	//Binary search
	while(low<=high){
		mid=floor((low+high)/2);
		if(key == a[mid])
		{
			printf("found %d at postion %i ",key,mid+1);
			break;}
		else if(key < a[mid])
			high=mid-1;
		else
			low=mid+1;
	}


  return 0;

}

