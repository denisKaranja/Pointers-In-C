/*
Search and sort algorithms
@__author Denis Karanja
@__date 21st March, 2015 00:18:30
*/
#include <stdio.h>
#include "../headers/search_sort_header.h"

int main()
{
	int numbers[] = {20, 10, 15, -2, 5, 22, 39, 65, -3, 34};
	int sorted_nums[] = {-3, -2, 5, 10, 15, 20, 22, 34, 39, 65};
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
	search == 1 ? printf("\t%d Found.\n", key): printf("\t%d Not found!\n", key);

	/*Binary search iterative*/
	printf("BINARY SEARCH(iterative)\n");
	key = -2;
	search = *binary_search(sorted_nums, &key, 0, array_length);
	search != -1 ? printf("\t%d Found.\n", key): printf("\t%d Not found!\n", key);

	/*Binary search recursive*/
	printf("BINARY SEARCH(recursive)\n");
	key = 5;
	search = *b_search_recursive(sorted_nums, &key, 0, array_length);
	search != -1 ? printf("\t%d Found.\n", key): printf("\t%d Not found!\n", key);

	printf("\n");

	return 0;

}