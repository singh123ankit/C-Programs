#include<stdio.h>
void print_pascal(int);
int find_coefficient(int,int);
int main(){
	int n;
	printf("Enter the no. of lines to be printed in pascal's triangle:");
	scanf("%d",&n);
	print_pascal(n);
	return 0;
}
void print_pascal(int line){
	int i,j,r,k;
	for(i=0;i<line;i++){
		for(j=0;j<(line-i)-1;j++){
			printf(" ");
		}
		for(r=0;r<=i;r++){
			k=find_coefficient(i,r);
			printf("%d\t",k);
		}
		printf("\n");
	}
}
int find_coefficient(int n,int r){
	int res=1,i;
	if(r>n-r)
	r=n-r;
	for(i=0;i<r;i++){
		res*=n-i;
		res/=i+1;
	}
	return res;
}
