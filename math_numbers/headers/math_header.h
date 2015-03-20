/*
Function prototype
@__author Denis Karanja
@__date 20th March, 2015 20:13:12
*/

/*pass reerence, return reference*/
int *factorial(int *);
int *fibonacci(int *);
int * get_square_ref(int *);


/*fundtion definition*/
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