#include<stdio.h>
#include<stdlib.h>
int main()
{
int age;
char *name=(char*)malloc (10*(sizeof(char)));
int *agePtr=&age;
char *namePtr=name;
char *lastResort;

printf("enter name and age: \n");
scanf("%s %d",name,agePtr);
printf("name = %s ; age =%d " ,name,*agePtr);


char *danglingPtr=(char *) (malloc (10*sizeof(char)));
danglingPtr=namePtr;

printf("Dangling ptr value = %s",danglingPtr);
free(name);
name="Whats my name";
*(int *)0=0;
printf("Now, Dangling ptr value = %s, last Resort =%s ",danglingPtr,lastResort);

return 0;
}
