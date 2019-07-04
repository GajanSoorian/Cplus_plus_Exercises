#include<stdio.h>

struct books{
	char name[10];
	char author[10];
	float price;
	};
void eval(struct books *,int);
void foo(float);
int main()
{
    
   int numberOfBooks;
   printf("Enter the number of books you have: ");   
   scanf("%d",&numberOfBooks);
   struct books gajan[numberOfBooks];

   for(int i=0;i<numberOfBooks;i++)
   {
        scanf("%s %s %f",gajan[i].name,gajan[i].author,&gajan[i].price); //name of the array .name and .author are the address of the 1st element in the array hence & is not needed.
   } 
   for(int i=0;i<numberOfBooks;i++)
   {
        printf("name= %s, author =%s \n",gajan[i].name,gajan[i].author);
	//foo(gajan[i].price);
        //if(i=numberOfBooks)
    }
    eval(&gajan[0],numberOfBooks);
    struct books temp=gajan[0];

}
void eval(struct books *thisBook,int numberOfBooks)
{
   float sum=0;
   for(int i=0;i<numberOfBooks;i++,thisBook++)
	sum+=thisBook->price;
    printf("The total value of you books is: %f",sum);

}

void foo(float price)
{
   printf("The total value of you book is: %f",price);

}
