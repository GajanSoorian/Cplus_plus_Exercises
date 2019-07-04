#include<stdio.h>

int main()

{
   char * city="Toronto"; 
   char town[]="Vaughn";

   //city[0]='V';
   city="Vancouver";
   typedef struct node{
	int ab;
	float ac;
	long ad;
	void *vptr;
}Node;
   Node myNode; 
   long b;
   int a;
   float c;
   void *ptr;
   printf("Size of int = %lu size of loang = %lu size of float = %lu size of void ptr = %lu size of struct =%lu",sizeof a,sizeof b,sizeof c,sizeof ptr,sizeof(Node));    
    
}
