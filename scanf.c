#include <stdio.h>
int main(void)
{
int n;
char c;
printf("Please enter three integers:\n");
scanf("%*d %d",&n);
printf("The last integer was %d\n",n);
return 0;
}
