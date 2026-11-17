#include <stdio.h>


int main() 
{

// Array of pointers to chars
// Miller is at index 0, Jones is at index 1, Anderson is at index 2    
// char *names[] = {"Miller","Jones","Anderson"};

// // Print the address of the second element in the array (Jones)
// printf("%p\n",(*(names+1)+2));

// //Print the value of the second element in the array (Jones)
// printf("%c\n",*(*(names+1)+2));

// //Print the value of the second element in the array (Jones)
// printf("%c\n",names[1][2]);

int vector[] = {28, 41, 7};
int *p0 = vector; //28
int *p1 = vector+1; //41
int *p2 = vector+2; //7

// Print the values of the elements difference using pointers
//ptrdiff_t 

//-------- Pointers difference is number of "elements/units" ------------
printf("p2-p0: %d\n",p2-p0); // p2 element - p0 element = 2 elements in between so result is 2
printf("p2-p1: %d\n",p2-p1); // res is 1 
printf("p0-p1: %d\n",p0-p1); // -1 

return 0;

}