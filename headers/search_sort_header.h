/*
Search_sort algorithms
@__author Denis Karanja
@__date 21st March, 2015 00:36:22
*/

/*
function prototype
*/
int *max(int *, size_t);


/*Definitions*/

int *max(int number_array[], size_t size)
/*
Get maximum value in an array of numbers(ints)
@param ptr(array)
@return ptr
*/
{
	int temp_max = number_array[0];
	int i, number_array_len;
	int *max_ptr;

	for(i = 0; i < size; i++)
	{
		if(number_array[i] > temp_max)
		{
			temp_max = number_array[i];
		}
	}

	max_ptr = &temp_max;
	
	return max_ptr;
}
