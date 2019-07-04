#include<stdio.h>

void binarySearch(int values[],int size);
int findMissingNum(int *values,int size);
int main()
{
	int values[]={1,2,3,4,5,6,8};
	char name[]="gajan";
	int size=sizeof values/sizeof(values[0]);
	int missingValue=findMissingNum(values,size);
	printf("\nmissing Value =%d \n",missingValue);
	binarySearch(values,size);
}

int findMissingNum(int *values,int size)
{
	printf("array = \n");
	int expectedSize=size+1;
	for(int i=0;i<size;i++)
	{
		printf("%d ",values[i]);
		if(values[i]!=(i+1))
			return (i+1);
	}

	
	return 0;
}

void binarySearch(int values[],int size)
{
	printf("Enter the search key : \n");
	int key;
	scanf("%d",&key);
	int first=0;
	int half;
	int last=size;
	while(first<=last)
	{
		half=first+ (last-first)/2;
		if(key<values[half])
		{
			last=half-1;
		}
		else if(key>values[half])
		{
			first=half+1;
		}
		else if(key==values[half])
		{
			printf("Key found! index =%d, value = %d",half,values[half]);
			return;
		}
	}
	//better to have a flag maybe?
	printf("Key not found.\n");
}
