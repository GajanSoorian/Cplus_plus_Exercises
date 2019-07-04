#include<stdio.h>

void foo();
int main()

{
  char myName[]="Gajan";
  printf("MY Name is %s and its size =%lu \n",myName,sizeof myName);
  char *herName="Mary Sunitha";
  
  printf("herName is %s and its size =%lu \n",herName,sizeof herName);
 //Sure seg fault: herName[0]='G';
//++ works for pointers, and not arrays.
  printf("Printing individual characters My name++= %s Her name++ =%s \n",myName+1,++herName);
  
  char * fruits[]={"apple","banana","Pear"};

  printf("Time for some fruits: %s ; %s  And one letter of %c %s\n",fruits[0],fruits[1],fruits[2][0],fruits[2]);
  foo();
return 0;
}

void foo()
{
printf("Inside Foo \n");
static int flag=0;

if (flag==0) 
{
  flag=1;
  printf("Going to call main!!!! \n");
  main();
}
}
