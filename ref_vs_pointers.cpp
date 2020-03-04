// Example program
/*
A pointer can be re-assigned any number of times while a reference cannot be re-assigned after binding.
Pointers can point nowhere (NULL), whereas a reference always refers to an object.
You can't take the address of a reference like you can with pointers.
There's no "reference arithmetic" (but you can take the address of an object pointed by a reference and do pointer arithmetic on it as in &obj + 5).
To clarify a misconception:

The C++ standard is very careful to avoid dictating how a compiler may implement references, but every C++ compiler implements references as pointers. That is, a declaration such as:

int &ri = i;
if it's not optimized away entirely, allocates the same amount of storage as a pointer, and places the address of i into that storage.
  
*/  
  
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
