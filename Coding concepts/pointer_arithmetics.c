#include <stdio.h>

int main() 
{
    int var = 10;
  
    int res = 0;

    // Pointer to int
    int *ptr1 = 0;
  
    // You must declare "**ptr2" with that syntax, because its just the way it is declared
    // Pointer to pointer (double pointer)
    //int **ptr2 = &ptr1;  

    // Accessing values using all three
    // printf("var: %d\n", var);          
    // printf("*ptr1: %d\n", *ptr1);
    // // This prints 10 becase ptr2 is a pointer to ptr1, 
    // //dereferencing it once gives us the address of var, 
    // //dereferencing it again gives us the value of var
    // printf("**ptr2: %d", **ptr2);

    printf("ptr1: %p\n", ptr1);
    ptr1--;
    printf("ptr1: %p", ptr1);

    return 0;
}