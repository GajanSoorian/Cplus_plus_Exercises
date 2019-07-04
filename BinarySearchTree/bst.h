#indef _TREE_H_
#define _TREE_H

#include<stdio.h>
#include<stdlib.h>
#define MAXITEMS 10

typedef struct item{
		char petName[20];
		char petType[20];
		}Item;

typedef struct node{
		Item item;
		Node *left;
		Node *right;
		}Node;

typedef struct tree{
		Node *root;
		int size;
		}Tree;


void initializeTree(Tree *pTree);

bool isTreeEmpty(const Tree *pTree);
bool isTreeFull(const Tree *pTree);
int itemCount(const Tree *pTree);
bool addItem(const Item *pi,Tree *pTree);

bool searchInTree(const Item *pi, Tree *pTree );
bool deleteItem(const Item *pi, Tree *pTree );

void traverse(Tree *pTree, void (* pfun)(Item item));

void deleteTree(Tree *pTree);
#endif
