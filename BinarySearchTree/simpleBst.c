#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
int number;
char name[20];
struct node *left;
struct node *right;
}Node;

typedef struct tree{
Node *root;
int size;
}Tree;

Node* insertNode(char name[],int num,Node *root);
void inorderRec(Node *node);
int findMinValue(Node*node);
int findMaxValue(Node*node);

int main()
{
	Tree phoneDirectory;
	phoneDirectory.root=NULL;
	int phoneNumber,initialCount;
	char fullName[20];
	printf("Enter number of entries you want to insert.\n");
	if(scanf("%d",&initialCount)!=1)
	{
		printf("Wrong Input, enter only positive numbers\n");
		exit(1);
	}
	printf("Enter name followed by space, followed by telephone number\n");
	for(int i=0;i<initialCount;i++)
	{
		scanf("%s %d",fullName,&phoneNumber);
		phoneDirectory.root=insertNode(fullName,phoneNumber,phoneDirectory.root); //Always return the root. head, start for handel.
	}
	printf("Lets print the BST inorder:\n");
	inorderRec(phoneDirectory.root);
	printf("Min value is: %d ; Max value is: %d \n",findMinValue(phoneDirectory.root),findMaxValue(phoneDirectory.root));
}

Node* insertNode(char* name,int num,Node *node)
{
	Node *newNode;
	if(node==NULL)
	{
		newNode=(Node*)malloc(sizeof(Node));
		strcpy(newNode->name,name);
		newNode->number=num;
		newNode->left=NULL;
		newNode->right=NULL;
		return newNode;
		  //BST not created, 1st iteration
	}
	//insert to left or right. Lets do int as key this time.
	else if(num<node->number)
	{	
		node->left=insertNode(name, num,node->left);
	}
	else if(num>node->number)
	{
		node->right=insertNode(name, num,node->right);
	}
	else
	{
		printf("Duplicate key. Skipping insert\n");
		return node;	
	}
	return node;
}



void inorderRec(Node *node)
{
	if(node==NULL)
		return;
	inorderRec(node->left);
	printf("%d ",node->number);
	inorderRec(node->right);
}

int findMinValue(Node *node)
{
	if(node==NULL)
		return 0;
	while(node->left!=NULL)
	{
		node=node->left;
	}
	return node->number;
}

int findMaxValue(Node *node)
{
	if(node==NULL)
		return 0;
	while(node->right!=NULL)
	{
		node=node->right;
	}
	return node->number;
}
/*
void inorder(Node *root)
{
	Node *leftNode=*rightNode=NULL;
	if(root ==Null)
	{	
		printf("Empty Tree \n");
		return;
	}
	
	while(1)
	{
		
		leftNode=root->left;
		if(leftNode==NULL)
		{
			printf("%d ",root->number);
			leftNode=rightNode;
		}	
		if(leftNode->left==NULL)
		{
			printf("%d  %d  ",leftNode->number,root->number);
			break;
		}
		root=root->left; //travelling down left node.
	}

	
	while(1)
	{
		
		rightNode=root->right;
		if(rightNode->right==NULL)
		{
			printf("%d  ",rightNode->number);
			break;
		}
		root=root->left; //travelling down left node.
	}

} */
