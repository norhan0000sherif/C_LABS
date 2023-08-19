#include<stdio.h>
#include"STD_TYPES.h"
#include<stdlib.h>
typedef struct{
	u8 element;
	struct *next;
	
}node;
node * head;
node *temp=head;
node *new_nodee=null; 

new_nodee=(node *)malloc(sizeof(node));

node* ADD_NEWNODE(u8 element,node *next);



int main()
   {int z;
   z=ADD_NEWNODE(u8 10,1000);
   }
   
   
   
node* ADD_NEWNODE(u8 element,node *next)
    {

	if(temp!=NULL)
	{
	temp=temp->next;	
	}
	else{
		node *head=new_nodee;
		node *next=NULL;

	}
    return new_nodee;}