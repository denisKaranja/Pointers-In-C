/*
The factorial 0=>1,1=>1,2=>2,3=>6,4=>24,5=>120
@__author Denis Karanja
Computer Science, University of Nairobi
@__date 20th March, 2015 17:56:32
*/
#include <stdio.h>
#include "../headers/math_header.h"

int main()
{
	int i = 20, fact, square, fibo, prime;

	printf("\nVALUES BY REFERENCE\n");

	/*factorial*/
	fact = *factorial(&i);
	printf("%d! -> %d\n",i, fact);

	/*square*/
	square = *get_square_ref(&i);
	printf("%d squared -> %d\n", i, square);

	/*fibonacci*/
	fibo = *fibonacci(&i);
	printf("Fibonacci %d -> %d\n", i, fibo);

	/*next prime number*/
	prime = *next_prime(&i);
	printf("Next prime from %d -> %d\n", i, prime);

	printf("\n\n");
	
	return 0;
}
