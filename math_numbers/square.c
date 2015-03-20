/*
*Prog that finds the square of a number
@__author Denis Karanja
@__date 20th March, 2015 17:00:02
*/
#include <stdio.h>

/*@pass value return value*/
int get_square_val(int);

/*@pass reference return ptr*/
int * get_square_ref(int *);

int main()
{
	int i = 1;
	int square;

	/*Return by value function*/
	printf("\nPass by value, return value:\n");
	for(i = 1; i <= 10; i++)
	{
		square = get_square_val(i);
		printf("%d squared -> %d\n", i, square);
	}

	printf("\n");

	for(i = 1; i <= 10; i++)
	{
		printf("-+");
	}

	/*Return by reference function*/
	printf("\n\nPass by reference return reference\n");
	for(i = 10; i <= 20; i++)
	{	
		square = * get_square_ref(&i);
		printf("%d squared -> %d\n", i, square);
	}

	return 0;
}

int get_square_val(int number)
/*
@param int
@return int
*/
{
	return number * number;
}

int * get_square_ref(int * number)
/*
@param ptr
@return ptr
*/
{
	int * square_ptr, square;
	square = *number * *number;
	square_ptr = &square;

	return square_ptr;
}