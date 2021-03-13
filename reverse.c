#include<stdio.h>
int main(){
	char str[20],ch;
	int i,len;
	printf("Enter a string:");
	gets(str);
	printf("Before reversing a string:\n");
	printf("%s",str);
	for(len=0;str[len]!='\0';len++){
	}
	for(i=0;i<=len/2;i++){
		ch=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=ch;
	}
	printf("\nAfter reversing a string:\n");
	printf("%s",str);
	return 0;
}
