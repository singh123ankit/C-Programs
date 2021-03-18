#include<stdio.h>
#include<stdlib.h>
void insbeg();
void insend();
void insspe();
void delbeg();
void delend();
void delspe();
void disp();
void terminate();
struct list{
	int info;
	struct list *next;
};
struct list *start;
int main(){
	start=NULL;
	int ch;
	while(1){
		printf("\n\n----------Menu------------------");
		printf("\n1.Insertion of node at the beginning.");
		printf("\n2.Insertion of node at the end");
		printf("\n3.Insertion of node at the specific location.");
		printf("\n4.Deletion of node at the beginning");
		printf("\n5.Deletion of node at the end");
		printf("\n6.Deletion of node at the specific location.");
		printf("\n7.Display the nodes of the linked list.");
		printf("\n8.Exit");
		printf("\n**********************************************");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insbeg();
				break;
			case 2:
				insend();
				break;
			case 3:
				insspe();
				break;
			case 4:
				delbeg();
				break;
			case 5:
				delend();
				break;
			case 6:
				delspe();
				break;
			case 7:
				disp();
				break;
			case 8:
				terminate();
				break;
			default:
				printf("Invalid choice....");
		}
	}
	return 0;
}
void insbeg(){
	struct list *nnode;
	int item;
	nnode=(struct list *)malloc(sizeof(struct list));
	if(nnode==NULL){
		printf("\nMemory cannot be allocated...");
		exit(0);
	}
	printf("\nEnter the item to be inserted:");
	scanf("%d",&item);
	nnode->info=item;
	if(start==NULL){
	start=nnode;
	nnode->next=NULL;
}
else{
	nnode->next=start;
	start=nnode;
}
}
void insend(){
	struct list *nnode,*ptr;
	int item;
	nnode=(struct list*)malloc(sizeof(struct list));
	if(nnode==NULL){
		printf("\nMemory cannot be allocated...");
		exit(0);
	}
	printf("\nEnter the item to be inserted:");
	scanf("%d",&item);
	nnode->info=item;
	for(ptr=start;ptr->next!=NULL;ptr=ptr->next);
	ptr->next=nnode;
	nnode->next=NULL;
}
void insspe(){
	int loc,i,item;
	i=1;
	struct list *nnode,*ptr;
	ptr=start;
	nnode=(struct list*)malloc(sizeof(struct list));
	if(nnode==NULL){
		printf("\nMemory cannot be allocated...");
		exit(0);
	}
	printf("\nEnter the item to be inserted:");
	scanf("%d",&item);
	nnode->info=item;
	printf("\nEnter the location at which the item has to be inserted:");
	scanf("%d",&loc);
	while(i<(loc-1)){
		if(ptr==NULL){
			printf("\nLocation is out of bound");
			return;
		}
		ptr=ptr->next;
	}
	nnode->next=ptr->next;
	ptr->next=nnode;
}
void delbeg(){
	struct list *ptr;
	ptr=start;
	if(start==NULL){
		printf("\nUnderflow error!!");
		return;
	}
	start=start->next;
	free(ptr);
}
void delend(){
		if(start==NULL){
		printf("\nUnderflow error!!");
		return;
	}
	struct list *ptr,*save;
	ptr=start;
	while((ptr->next)!=NULL){
		save=ptr;
		ptr=ptr->next;
	}
	save->next=NULL;
	free(ptr);
}
void delspe(){
	if(start==NULL){
		printf("\nUnderflow error!!");
		return;
	}
	int item,i;
	i=1;
	printf("\nEnter the item to be deleted:");
	scanf("%d",&item);
	struct list *ptr,*save;
	ptr=start;
	save=NULL;
	while(ptr!=NULL){
		if(ptr->info==item){
			break;
		}
		save=ptr;
		ptr=ptr->next;
	}
	if(ptr==NULL){
		printf("Item to be deleted not found!");
		return;
	}
	else if(save==NULL){
		start=start->next;
	}
	else{
		save->next=ptr->next;
	}
	free(ptr);
}
void disp(){
	struct list *ptr;
	if(start==NULL){
		printf("Linked list is empty..");
		return;
	}
	for(ptr=start;ptr!=NULL;ptr=ptr->next){
		if(ptr->next==NULL){
			printf("%d",ptr->info);
		}
		else{
			printf("%d\t->\t",ptr->info);
		}
	}
}
void terminate(){
	exit(0);
}
