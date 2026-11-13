#include <stdio.h>


int main() 
{
int num = 5;
const int limit = 500;
int *pi; // Pointer to an integerconst 
int limitptr;
const int *pci; // Pointer to a constant integerpi = &num;
pci = &limit;


//Constant pointer to a constant integer
const int *const cpciptr = &limitptr;

int num2;
int num3;
int *const cpi2 = &num2;
int *cpi3 = &num3;
int num_4;

// Constant pointer to a constant integer
const int *const cpciptr2 = &num_4; 


//cpi2 = &num3; // This line will cause a compilation error because cpi2 is a constant pointer and cannot be reassigned to point to a different address.

cpi3 = &num3; // This line is valid because cpi3 is a regular pointer and can be reassigned to point to a different address.

printf(" num - Address: %p value: %d\n",&num, num);
printf("limit - Address: %p value: %d\n",&limit, limit);
printf(" pi - Address: %p value: %p\n",&pi, pi);
printf(" pci - Address: %p value: %p\n",&pci, pci);


//--------------Pointer to (constant pointer to constant)-----------

int limit_const_const = 500;
const int *const cpci_const_const = &limit_const_const;
const int *const *pcpci_const_const;
pcpci_const_const = &cpci_const_const;

printf("%d\n", *cpci_const_const);

//This would print the address of limit_const_const
printf("%d\n",*pcpci_const_const);

return 0;

}