/*
Search and sort algorithms
@__author Denis Karanja
@__date 21st March, 2015 00:18:30
*/
#include <stdio.h>
#include "../headers/search_sort_header.h"

int main()
{
	int numbers[] = {20, 10, 15, -2, 5, 22, 34, 65, -3, 34};
	int i, max_value, min_value;
	int array_length;

	array_length = sizeof(numbers) / sizeof(numbers[0]);
	printf("\n");

	for(i = 0; i < array_length; i++)
	{
		printf("%d, ", numbers[i]);
	}
	printf("\n");

	/*maximum value in an array*/
	max_value = *max(numbers, array_length);
	printf("Maximum value above is %d \n", max_value);

	/*minimum value*/
	min_value = *min(numbers, array_length);
	printf("Minimum value above is %d \n\n", min_value);

	return 0;

}