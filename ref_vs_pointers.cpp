// Example program
#include <iostream>
#include <string>

int main()
{
int x=10;
int y=20;
int& ref =x;   //ref is not bound to x

int* ptr= &x;   // ptr points to x

std::cout<<x<< " "<<ref<< " "<<*ptr<<std::endl;

ref = y;      // ref is still bound to x. So this is like an alias. x=y;
ptr = &y;     // ptr now point so x;

y=25;         // x is still 20

std::cout<<x<< " "<<ref<< " "<<*ptr;

}

// output is :
// 10 10 10
// 20 20 25 
