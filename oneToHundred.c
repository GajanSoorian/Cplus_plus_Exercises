#include<stdio.h>
#define N 100
int main(int num,char * argv[])

{
printf(" num = %d \n",num);
while( num <= N && printf(" %d ",num) && num++)
{
}

return 0;
}
