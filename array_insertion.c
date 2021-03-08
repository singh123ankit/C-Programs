#include<stdio.h>
int main(){
	int arr[20],loc,i,n;
	printf("Enter 10 elements in the array:");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the new value to be inserted in the array:");
	scanf("%d",&n);
	printf("Enter location to insert new value:");
	scanf("%d",&loc);
	printf("Before Insertion:\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	for(i=10;i>(loc-1);i--){
		arr[i]=arr[i-1];
	}
	arr[loc-1]=n;
	printf("\nAfter Insertion:\n");
	for(i=0;i<=10;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
