#include<stdio.h>
 void findMissing(int []);
int main(int n, char * argv[])

{
  int seq[]={1,2,4,5,6,8};

  int size=sizeof(seq)/sizeof(seq[0]);
  printf("Length of array = %d", size);
  findMissing(seq);
}

void findMissing(int seq[])

{
  printf("hi %d",seq[4]);
  int size=sizeof(seq)/sizeof(seq[0]);
  printf("Length of array = %d", size);
}
