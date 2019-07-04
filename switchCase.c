#include<stdio.h>
#include<ctype.h>
int main()

{
  char ch;
  while(ch=getchar())
  {
    if(isdigit(ch))
      break;
    if(ch== '\n')
     continue;
    switch(ch){
    case 'a':
     printf("a is a good choice\n"); 
     break;
      
    case 'b':
     printf("b is a ok\n"); 
     break;
    default:  
      printf("Not a good choice %c",ch);
      }
  }   
  return 0;
  
}
