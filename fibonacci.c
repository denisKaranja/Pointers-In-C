/*
The fibonacci sequence. 1,1,2,3,5,8,13,21,34,55,89,144...
@__author Denis Karanja
@__date 20th March, 2015 17:23:02
*/
#include <stdio.h>

/*@pass reference, return reference*/
int * fibonacci(int *);

int main()
{
	int i, fibo;
	printf("Pass by reference return reference\n");
	for(i = 1; i <= 10; i++)
	{
		fibo = *fibonacci(&i);
		printf("Fibonacci %d -> %d\n", i, fibo);
	}

	return 0;
}

int * fibonacci(int * number)
/*
@param ptr
@return ptr
*/
{
	int x = 0, y = 1, z = 1, i;
	int *fibo_ptr;
	for(i = 1; i <= *number; i++)
	{
		x = y;
		y = z;
		z = x + y;
	}

	fibo_ptr = &x;
	return fibo_ptr;
}

