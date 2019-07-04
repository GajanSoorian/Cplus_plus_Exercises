#include<stdio.h>

int main()
{

	enum sugarLevel{low=100,high=300,superHigh}mine;


	mine=low;
	printf("My sugar level = %d\n",mine);
	for(;mine<high;mine++);
	{
	}
	printf("Now, My sugar level = %d \n",mine);

}
