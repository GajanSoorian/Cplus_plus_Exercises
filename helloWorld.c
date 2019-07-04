#include<stdio.h>

int add(int,int);

int main()
{

	printf("hi sun! \n");
	if(1)
	{
		printf("I guess this is true\n");
	}
printf("Lets add 2  and 4\n");
printf("2 + 4 would be = %d ",add(2,4));
return 0;
}

int add(int a, int b)
{
	return a+b;
}
