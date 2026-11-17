#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 


int main() 
{
    //The calloc function will allocate and clear memory at the same time.
    int *pi = calloc(5,sizeof(int));

    // printf("Pi contents %d\n", *pi++);
    // printf("Pi contents %d\n", *pi++);
    // printf("Pi contents %d\n", *pi++);
    // printf("Pi contents %d\n", *pi++);
    // printf("Pi contents %d\n", *pi++);

    for(int i = 0; i<5; i++)
    {
        printf("Pi contents %d\n", *pi++);
    }

    //this produces the same result as calloc line 9 
    // int *pim = malloc(5 * sizeof(int));
    // memset(pim, 0, 5* sizeof(int));

    

}