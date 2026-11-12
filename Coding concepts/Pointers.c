#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int main() 
{
    // 1. Allocate memory for p (equivalent to 'new int' in C++)
    int *p = (int *)malloc(sizeof(int));
    // 2. Assign 7 to the memory location pointed to by p
    *p = 7;
    // 3. Initialize pointer q. Hold the address of p in q
    int *q = p; 
    // 4. Change the value at p to 8
    *p = 8;
    printf("q is: %d", *q);
    // Clean up allocated memory
    free(p);
    // printf("q is: %d", *q);
    // printf("\nq is: %p", &q);
    
    return 0;
}
