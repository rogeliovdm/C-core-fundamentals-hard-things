#include <stdio.h>

int add(int a, int b) 
{
    return a + b;
}

int main() 
{
    int res = 0;
  
    // Declare a function pointer that matches
  	// the signature of add() function
    int(*ptr)(int, int); 

    // Assign address of add() with the callback 
    ptr = &add;
    
    // Call the function via ptr

    res = ptr(10, 5);

    printf("res: %d", res);
     
    return 0;
}