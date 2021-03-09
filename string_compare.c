#include<stdio.h>
int compare_string(char *,char *);
int main(){
	char str1[20],str2[20];
	int k;
	printf("Enter first string:");
	gets(str1);
	printf("Enter second string:");
	gets(str2);
	k=compare_string(str1,str2);
	if(k==0){
		printf("\nBoth strings are equal");
	}
	else if(k==-1){
		printf("\nString2 is greater than string1");
	}
	else
	printf("\nString1 is greater than string2");
	return 0;
}
int compare_string(char str1[],char str2[]){
	int i;
	for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++){
		if(str1[i]>str2[i]){
			return 1;
		}
		else if(str1[i]<str2[i]){
			return -1;
		}
	}
	if(str1[i]==str2[i]){
		return 0;
	}
	else if(str1[i]>str2[i]){
		return 1;
	}
	else{
		return -1;
	}
}
