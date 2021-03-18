#include<stdio.h>
int main(){
	char str1[10],str2[10],str3[21];
	int count,i,j;
	printf("\nEnter the first string:");
	gets(str1);
	printf("\nEnter the second string:");
	gets(str2);
	for(i=0,j=0;str1[i]!='\0';i++,j++){
		str3[j]=str1[i];
}
	for(i=0;str2[i]!='\0';i++,j++){
		str3[j]=str2[i];
	}
	str3[j]='\0';
	printf("Concatenation of string:\n");
	printf("%s",str3);
}
