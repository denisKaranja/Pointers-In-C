/*
*Prog that finds the square of a number
@__author Denis Karanja
@__date 20th March, 2015 17:00:02
*/
#include <stdio.h>


int main()
{
	int i = 1;
	int square;

	/*Return by reference function*/
	printf("\n\nPass by reference return reference\n");
	for(i = 10; i <= 20; i++)
	{	
		square = * get_square_ref(&i);
		printf("%d squared -> %d\n", i, square);
	}

	return 0;
}