#include <stdio.h>
#include <stdlib.h>

// int main() 
// {
// int *pi = (int*) malloc(sizeof(int));
// *pi = 5;
// printf("*pi: %d\n", *pi);
// free(pi);
// return 0;
// }


//----Heap buffer overflow example----
// int main() 
// {

// //Only 6 B were allocated 
// char *pc = (char*) malloc(6);
// //but we are trying to write 8 B
//     for(int i=0; i<8; i++) 
//     //This will cause a heap buffer overflow
//     {
//     pc[i] = 0;
//     }
// }

//----Heap buffer overflow fixed----
// int main() 
// {
//     //Only 8 B were allocated 
//     char *pc = (char*) malloc(6*sizeof(char));
//     //Now we are only writing 6 B
//     for(int i=0; i<8; i++) 
//     {
//         pc[i] = 0;
//     }
//     return 0;
// }

//----Way 1 to fix it----

// int main() 
// {
//     int size = 6;
//     //Only 8 B were allocated 
//     char *pc = (char*) malloc(6*sizeof(char));
//     //Now we are only writing 6 B
//     for(int i=0; i<size; i++) 
//     {
//         pc[i] = 0;
//     }
//     return 0;
// }


// Good practice with malloc 

int main() 
{
int *pi = (int*) malloc(sizeof(int));
if(pi != NULL) 
    {// Pointer should be good
    }
    else 
    {// Bad pointer
    }
    return 0;
}

