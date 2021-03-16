#include<stdio.h>
#include<stdlib.h>
void additem();
void dispitem();
struct product{
	char name[20];
	int idno;
	int price;
	int qty;
};
int main(){
	struct product item1;
	int ch;
	FILE *ptr;
	int i,n;
	ptr=fopen("file1","w");
	if(ptr==NULL){
		printf("Cannot open the file");
		exit(0);
	}
	do{	
	additem(ptr,&item1);
	printf("Do you want to add more items?Press '1' for yes and '0' for no. :");
	scanf("%d",&ch);
}while(ch==1);
n=ftell(ptr);
fclose(ptr);
ptr=fopen("file1","r");
fprintf(stdout,"\n|Name|      |ID_NO.|        |Price|      |Quantity|\n");
while(ftell(ptr)<n){
	fscanf(ptr,"%s %d %d %d",item1.name,&item1.idno,&item1.price,&item1.qty);
	fprintf(stdout,"%s\t\t%d\t\t%d\t\t%d\n",item1.name,item1.idno,item1.price,item1.qty);
}
fclose(ptr);
	return 0;
}
	void additem(FILE *ptr,struct product *item){
		fprintf(stdout,"\n............Enter the details of product.........\n");
		fprintf(stdout,"Enter name of Item:");
		fscanf(stdin,"%s",item->name);
		fprintf(stdout,"Enter Id number of item:");
		fscanf(stdin,"%d",&item->idno);
		fprintf(stdout,"Enter price  of item:");
		fscanf(stdin,"%d",&item->price);
		fprintf(stdout,"Enter quantity of item:");
		fscanf(stdin,"%d",&item->qty);
		fprintf(ptr,"%s %d %d %d",item->name,item->idno,item->price,item->qty);
	}

