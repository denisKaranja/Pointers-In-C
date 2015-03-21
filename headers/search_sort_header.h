/*
Search_sort algorithms
@__author Denis Karanja
@__date 21st March, 2015 00:36:22
*/

typedef int bool;
enum {false, true};

/*
function prototype
*/
int *max(int *, size_t);
int *min(int *, size_t);
int *linear_search(int *array, int *key, size_t);
int *binary_search(int *array, int *key, int low_index, int high_index);
int *b_search_recursive(int *array, int *key, int low_index, int high_index);


/*Definitions*/
int *b_search_recursive(int *array, int *key, int low_index, int high_index)
/*
Search array for a specific key(Recursively)
@params -> array, int(key), size_t(low_index), size_t(high_index)
@return reference(ptr)
*/
{
	int middle, found, *bs_recursive_ptr;

	if(array[low_index] == *key)
	{
		found = 1;
		bs_recursive_ptr = &found;
		return bs_recursive_ptr;
	}

	else if(low_index >= high_index)
	{
		/*key not found..Base case*/
		found = -1;
		bs_recursive_ptr = &found;
		return bs_recursive_ptr;
	}


	
	middle = (low_index + high_index) / 2;

	if(*key == array[middle])
	{
		found = 1;
		bs_recursive_ptr = &found;
		return bs_recursive_ptr;
	}
	else if(*key < array[middle])
	{
		high_index = middle - 1;
		b_search_recursive(array, key, low_index, high_index);
	}
	else
	{
		low_index = middle + 1;
		b_search_recursive(array, key, low_index, high_index);
	}
	
	
}


int *binary_search(int *array, int *key, int low_index, int high_index)
/*
Search array for a specific key
@params -> array, int(key), size_t(low_index), size_t(high_index)
@return reference(ptr)
*/
{
	int middle, *b_search_ptr, found;

	/*loop till low_index subscript is greater than high_index subscript*/
	while(low_index <= high_index)
	{
		middle = (high_index + low_index) / 2;

		/*key found in the middle element*/
		if(*key == array[middle])
		{
			found = 1;
			b_search_ptr = &found;
			return b_search_ptr;
		}

		/*if key is less than the middle element, set new high_index*/
		else if(*key < array[middle])
		{	
			high_index = middle - 1;
		}

		/*if key is greater than middle element, set new low_index*/
		else
		{
			low_index = middle + 1;
		}
	}

	/*key not found*/
	found = -1;
	b_search_ptr = &found;
	return b_search_ptr;
}

int *linear_search(int *array, int *key, size_t size)
/*
Search for a specific key in the array
@params -> array, int, size_t
@return int/boolean
*/
{
	int i, *l_search_ptr, found;

	for(i = 0; i < size; i++)
	{
		if(array[i] == *key)
		{
			found = 1;
			l_search_ptr = &found;
			return l_search_ptr;
		}
	}

	found = -1;
	l_search_ptr = &found;
	return l_search_ptr;
}


int *min(int *array, size_t size)
/*
Get minimum value in an array of numbers(ints)
@param ptr(array)
@return ptr
*/
{
	int min_val = array[0];
	int i, *min_ptr;

	for(i = 0; i < size; i++)
	{
		if(array[i] < min_val)
		{
			min_val = array[i];
		}
	}

	min_ptr = &min_val;

	return min_ptr;
}

int *max(int number_array[], size_t size)
/*
Get maximum value in an array of numbers(ints)
@param ptr(array)
@return ptr
*/
{
	int temp_max = number_array[0];
	int i;
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
