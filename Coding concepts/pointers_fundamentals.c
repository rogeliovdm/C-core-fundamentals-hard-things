#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*---------------------------Fundamentals---------------------------------*/
    // Normal Variable
    int var = 10;

    // Pointer Variable ptr that stores address of var
    int *ptr = &var; 

    // Directly accessing ptr will give us an address
    printf("%p", &ptr);
    printf("\nvar address is %p ", &var);
  	printf("\nptr is %d", *ptr);

    /*---------------------------size of pointers---------------------------------*/
    int *ptr1;
    char *ptr2;
     
    printf("\nsize of ptr1 %zu \n", sizeof(ptr1)); 
    printf("size of ptr2 %zu", sizeof(ptr2));

    /*---------------------------NULL, Void, Wild and Dangling pointer---------------------------------*/
    int *null_ptr = NULL; //-> nothing points to any object 
    printf("\nnull_ptr is %p", null_ptr);

    void *voidptr; //-> can point to any data type
    printf("\nvoidptr is %p", voidptr);

    int *wildptr; //-> wild pointer, has been declared but not initialzed points to some random memory location -> undefined behavior
    printf("\nwildptr is %p", wildptr);

    // After below free call, ptr becomes a dangling pointer

    /*A dangling pointer is a pointer that refers to a memory location that has already been deallocated or freed. Accessing such a pointer leads to undefined behavior.

    Dereferencing a dangling pointer can cause program crashes, incorrect results, or memory access errors.
    Dangling pointers commonly occur when dynamically allocated memory is freed but the pointer is not updated or set to NULL.*/ 

    int* dangptr = (int*)malloc(sizeof(int));

    free(dangptr);
    printf("\ndangptr is %p", dangptr);

    printf("\nMemory freed\n");

    // removing Dangling Pointer
    ptr = NULL;




    return 0;
}

