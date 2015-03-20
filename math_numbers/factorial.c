/*
The factorial 0=>1,1=>1,2=>2,3=>6,4=>24,5=>120
@__author Denis Karanja
@__date 20th March, 2015 17:56:32
*/
#include <stdio.h>

/*pass reerence, return reference*/
int *factorial(int *);

int main()
{
	int i, fact;
	printf("Factorials by reference\n");

	for(i = 0; i <= 10; i++)
	{
		fact = *factorial(&i);
		printf("%d! -> %d\n",i, fact);
	}

	return 0;
}

int *factorial(int *number)
/*
Get factorial of a number
@param ptr
@return ptr
*/
{
	int i, product = 1, *fact_ptr;

	for(i = 0; i < *number; i++)
	{
		product *= i + 1;

	}

	fact_ptr = &product;

	return fact_ptr;
}