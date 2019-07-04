#include<stdio.h>

int getDecimal();

int getDecimal()
{
  int decimal;
  printf("Enter a decimal Value: ");
  scanf("%d",&decimal);  //add validations
  return decimal; 
}

int main()
{
  int decimal=getDecimal(); 
  
  //divide by 2 repetedly till, modulo = :
  return 0;
}
