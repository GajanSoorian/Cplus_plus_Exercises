#include"shadowing.h"
void foo();
int main()
{
  printf("our hero in main is %s\n",hero);

  char hero[] ="batman";
  foo();
  printf("our hero in main end is %s\n",hero);
}

void foo()

{
  printf("our hero in foo is %s\n",hero);

  char hero[] ="blackPanther";
  printf("our hero in foo end is %s\n",hero);
}
