#include<stdio.h>
#define PRAISE(x) (printf("what is nice name %s is\n",x))
int main()
{

register int age=10;

printf("age is stored in Register Storage Class Specifier; age = ",age);
printf("\n Can we store values in Register age? Lets find out \n");
scanf("%d",&age);
printf("age is stored in Register Storage Class Specifier; age = ",age);

}

void previousMain()
{
float priceInDollars=54.503451;
int productCount=5;
char name[40];
printf("the price is %.2f . The same in hexa is %a \n size of float = %lu",priceInDollars, priceInDollars,sizeof(priceInDollars));
printf("the price is %d size of Int = %lu\n",productCount,sizeof(productCount));
printf("Here is printf doing something funny \n price is %d size of Int = %d\n",productCount);
printf("Enter your name \n");
//scanf("%s",&name);
//PRAISE(name);

printf("He sold the painting for $%2.2f.\n", 2.345e2);

printf("%c%c%c %c\n", 'H', 105, '\41',2588);
printf("Is %2.3e the same as %2.2f?\n", 1201.0, 1201.0);

char s[6]={'a','b','c','e','f'};
printf("string is %3.3s\n",s);
return 0; 

}
