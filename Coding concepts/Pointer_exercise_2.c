#include <stdio.h>
#include <string.h>	
	
int* get_value(void)
{
	int *value = NULL;
	
	int var = 8;
	
	value = &var;
	
	return (int*) value;
}
	 
int main(void)
{
	int *p = get_value();
	
	printf("%p\n", *p);
	
	return 0;
}