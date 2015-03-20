/*
The fibonacci sequence. 1,1,2,3,5,8,13,21,34,55,89,144...
@__author Denis Karanja
@__date 20th March, 2015 17:23:02
*/
#include <stdio.h>

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


