#include<stdio.h>
struct animal{
char name[15];
int foodHabit;
float averageWeight;
};

void getAnimal(struct animal *);
void printAnimal(struct animal *);
void checkStatus(struct animal *);
int main()
{
   struct animal species;
   getAnimal(&species);
   printAnimal(&species);
  checkStatus(&species);
return 0;
}

void getAnimal(struct animal *species)
{
   printf("Enter animal species name:\n");
   scanf("%s",species->name);
   printf("Enter animal species food habit- 0 for carnivour, 1 for herbivour:\n");
   scanf("%d",&species->foodHabit);
   printf("Enter animal average Weight:\n");
   scanf("%f",&species->averageWeight);
}

void printAnimal(struct animal *species)
{
   printf("Animal species name: %s\n",species->name);
   printf("Animal average Weight: %f\n",species->averageWeight);
}
void checkStatus(struct animal *species)
{
   (species->foodHabit==0)? printf("endangered"):printf("not Endangered") ;  //didnt think this would work.
}
