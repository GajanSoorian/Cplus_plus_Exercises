#include<stdio.h>
#include<stdlib.h>


void * getDynamicArray(int);
void populateArray();
void printElements(int *,int n);
int main()
{  int n;
   printf("Enter the size of the array: \n");
   scanf("%d",&n);  //To do: constraints and UI validation.
   int staticArray[n];
   int *dynamicArray=(int *)getDynamicArray(n);
   printf("size of static Array = %d \n size of dynamic Array = %d\n" ,(int)sizeof(staticArray),(int)sizeof(dynamicArray));
   printf("enter values for the Arrays:\n");
   for(int i=0;i<n;i++)
   {
       int value;
       scanf("%d",&value);
       staticArray[i]=value;
       dynamicArray[i]=value;
    }

   printf("Values held in the static array are: \n");
   int *ptrStatic=staticArray;
   printElements(ptrStatic,n);
   printf("Values held in the dynamic array are: \n");
   printElements(dynamicArray,n);
   free(dynamicArray);
}

void printElements(int *ptr,int n)
{
   for(int i=0;i<n;i++)
   {
       printf("elements are: %d\n",ptr[i]);
       printf("Another way to print this is: %d\n",*(ptr+i));
   }
}
void * getDynamicArray(int size)  //To do: make it generic for all datatypes.
{
    void * allocatedPtr;
    if((allocatedPtr=malloc(size*sizeof(int)))!=NULL)
	{
	    return allocatedPtr;
	}
    else
        {
	    printf("Error with mem allocation\n");
	    exit(0);
	}

}

