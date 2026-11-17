#include <stdio.h>
#include <stdlib.h>

// int main() 
// {
//     char *chunk;
//     while (1) 
//     {
//     chunk = (char*) malloc(1000000);
//     printf("Allocating\n");
//     }
// } 


// Undefined behavior example - not initializing the pointer before dereferencing it
int main() 
{
int *pi = (int*) malloc(sizeof(int));
//print address that pi points to
printf("value that pi points to: %d\n", *pi);
*pi = 5;

printf("value that pi points to: %d\n", *pi);
//here you loose the reference to the allocated memory, causing a memory leak
pi = (int*) malloc(sizeof(int));

// the same address value is assigned 
printf("value that pi points to: %d\n", *pi);
}