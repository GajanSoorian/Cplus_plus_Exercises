#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"bst.h"


typedef struct pair{
		Node *parent;
		Node *child;
}Pair;

static Node *makeNode(const Item *);
static bool toLeft(Const Item *,Const Item *)
static book
bool addItem(Const Item *pi, Tree *pTree)
{
//Check if Tree is full and check if item already exists in the tree.

	Node *newNode;

	if(TreeFull(pTree))
	{
		printf("Tree is full \n");
		return false;
	}
	if (seekItem(pi,pTree).child !=NULL)
	{
		printf("Duplicate Node. Exiting \n");
		return false;
	}
	newNode=MakeNode(pi);
	
	if(newNode==Null)
	{
		printf("Cannot create Node. \n");
		return false;
	}
	//Now Node is created and all is well. Attach it to the tree.
	if(pTree->root ==NULL)
	{
		ptree->root=newNode;
	}
	else
	{
		addNode(new_node,ptree->root);
	}
	ptree->size++;


}

static Node * makeNode(const Item *pi)
{
	Node *newNode;
	newNode=(Node*)(malloc(sizeof (Node)));
	if(newNode!=NULL)
	{
		newNode->item=*pi; //value assignment. Way better. Duh!!
		newNode->left=Null;		
		newNode->right=Null;		
	}
	return newNode;
}

static void addNode(Node *newnode, Node *root)
{
	if(toLeft(&newNode->item,&root->item))  //Is address operator required?.compare the Item.
	{
		if(root->left==NULL)
			root->left=newNode;
		else
			addNode(newNode,root->left);	
	}
	
	else if(toRight(&newNode->item,&root->item))  //Is address operator required?.compare the Item.
	{
	
		if(root->right==NULL)
			root->right=newNode;
		else
			addNode(newNode,root->right);	
	}
	else
	{
		printf("Location Error\n"); //duplicates?
		exit(1);
	}
} 

static bool toLeft(const item *nodeItem, const item *rootItem)
{
	int compFlag;
	if((compFlag=strcmp(nodeItem->petName,rootItem->petName))<0)
		{
			return true;
		}
	else if(compFlag==0 && strcmp(nodeItem->petKind,rootItem->petKind)<0)
		{
			return true;
		}
	else
		return false;
}
static bool toRight(const item *nodeItem, const item *rootItem)
{
	int compFlag;
	if((compFlag=strcmp(nodeItem->petName,rootItem->petName))>0)
		{
			return true;
		}
	else if(compFlag==0 && strcmp(nodeItem->petKind,rootItem->petKind)>0) //What about petKind being equal?
		{
			return true;
		}
	else
		return false;
}


static seekItem(const Item *pi, const Tree *pTree)  //Needs a new structure with 2 pointers- the address of the node,i.e this will be help in the parent. Also the sought after node's child, so that the parent can be updated.
{
//first, take care of the null and the corner cases.
	Pair look;
	look.parent=NULL;
	look.child=pTree->root;
	if(look.child==NULL)
	{
		return look;  //is this right?
	}
	while(look.child!=NULL)
	{
		if(toLeft(pi,&(look.child->Ite
}
