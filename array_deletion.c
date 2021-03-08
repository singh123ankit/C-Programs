#include<stdio.h>
int main(){
	int arr[20],loc,i;
	printf("Enter 10 elements in the array:");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter location to delete new value:");
	scanf("%d",&loc);
	printf("Before Deletion:\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	for(i=(loc-1);i<10;i++){
		arr[i]=arr[i+1];
	}
	printf("\nAfter Deletion:\n");
	for(i=0;i<9;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
