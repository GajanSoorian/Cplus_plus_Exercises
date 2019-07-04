#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    //Complete this function
    Node *node=(Node *) malloc(sizeof(Node));
    node->data=data;
    node->next=NULL;

    if(head==NULL)
	{
		return node;
	}
    Node* nextNode=head->next;
    if(nextNode==NULL)
	{
		head->next=node;
		return head;
	}
        //parse to the end and set next node-> to ourNode 
    for(;nextNode->next!=NULL;nextNode=nextNode->next)
        {
            
        }
        nextNode->next=node;
        return head;
}
void display(Node *head)
{
	Node *start=head;
	printf("Printing Node: \n");
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
  	display(head);
    }
  display(head);
		
}

