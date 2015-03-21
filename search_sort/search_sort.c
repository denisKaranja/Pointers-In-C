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
	int i;
	int array_length;

	array_length = sizeof(numbers) / sizeof(numbers[0]);
	printf("\n");

	for(i = 0; i < array_length; i++)
	{
		printf("%d, ", numbers[i]);
	}
	printf("\n");

	/*maximum value in an array*/
	printf("MAX/MIN VALUES\n");
	int max_value;
	max_value = *max(numbers, array_length);
	printf("\tMaximum value above is %d \n", max_value);

	/*minimum value*/
	int min_value;
	min_value = *min(numbers, array_length);
	printf("\tMinimum value above is %d \n\n", min_value);

	/*linear search*/
	printf("LINEAR SEARCH\n");
	int key = 11, search;
	search = *linear_search(numbers, &key, array_length);
	if(search != -1)
	{
		printf("\t%d Found.\n", key);
	}
	else
	{
		printf("\t%d Not found!\n", key);
	}

	return 0;

}