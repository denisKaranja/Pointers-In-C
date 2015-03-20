/*
Function prototype
@__author Denis Karanja
@__date 20th March, 2015 20:13:12
*/

typedef int bool;
enum {false, true};
/*
#define TRUE 1
#define FALSE 0
*/

/*
function prototype
pass reerence, return reference
*/
int *factorial(int *);
int *fibonacci(int *);
int *get_square_ref(int *);
int *next_prime(int *);
int is_prime(int *);


/*fundtion definition*/
int *next_prime(int *start)
/*
Return the next prime given the start reference
@param ptr
@return ptr
*/
{
	int i = (*start + 1);
	int *prime_ptr;
	do
	{
		if (is_prime(&i))
		{
			prime_ptr = &i;
			return prime_ptr;
		}
		i++;

	} while (i >= 1);
}

int is_prime(int *number)
/*
Check if a number is prime
@param ptr
@return boolean
*/
{
	if(*number == 1)
	{
		return false;
	}
	if((*number % 2) == 0)
	{
		return (*number == 2);
	}

	int start = 3;
	while((start * start) <= *number)
	{
		if((*number % start) == 0)
		{
			return false;
		}
		start += 2;
	}

	return true;
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


int *fibonacci(int * number)
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

int *get_square_ref(int * number)
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