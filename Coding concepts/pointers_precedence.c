#include <stdio.h>

int main(void)
	{
	    int a[] = {10, 20, 30, 40};
	    int *p = a;
        
        //C can just do 1 thing at once: First locate *p
        //It will therefore print what you have in *p which is 10 
	    //printf("%d\n", *p++);
        //Then it will print what you have in *p with the effects from the line above, which is 20
	    //printf("%d\n", *p);
        //--------------------However---------------------------------        
        //Here you have the ++ attached to p first. Do the increment first, then print what you have at *p 
        printf("%d\n", *++p);
        //Then it will print what you have in *p with the effects from the line above, which is 20
	    printf("%d\n", *p);

        //Here you dereference first so: fetch 20 and then add 1. Gives 21 as result 
        printf("%d\n", ++*p);
        //Then it will print what you have in *p with the effects from the line above, which is 21
	    printf("%d\n", *p);


	 
	    return 0;
	}
 