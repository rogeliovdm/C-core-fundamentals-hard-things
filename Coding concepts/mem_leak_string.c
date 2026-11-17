#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

// int main() 
// {

//     char *name = (char*)malloc(strlen("Susan")+1);
//     strcpy(name,"Susan");
//     while(*name != 0) 
//     {
//         printf("%c\n",*name);
//         name++;
//     }
//     //the address to which 'name' points in the beginning will be lost after the loop


// } 


int main() 
{
    //you dont give a size to the pointer, so it will point to a random address in memory
    // what is the size of the input buffer? you need to allocate memory for it
char *name;
printf("Enter a name:");
// when you press enter, it will likely cause a segmentation fault
// the pointer name is not initialized to point to a valid memory location, 
//so scanf will write to an invalid address, leading to undefined behavior and likely a crashö
scanf("%s",name);


const int NUMBER_OF_DOUBLES = 10;

//incorrect allocation for 80 bytes-> only allocates 10 B 
double *pd = (double*)malloc(NUMBER_OF_DOUBLES);
//correct allocation for 80 bytes
double *pd_corr = (double*)malloc(NUMBER_OF_DOUBLES * sizeof(double));

//incorrect
//static int *pi_corr = malloc(sizeof(int));

//Correct
static int *pi_corr_2;
pi_corr_2 = malloc(sizeof(int));

}
