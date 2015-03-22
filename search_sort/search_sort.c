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
	int i;
	int array_length;

	array_length = sizeof(numbers) / sizeof(numbers[0]);
	printf("\n");

	print_array(numbers, array_length);

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
	printf("LINEAR SEARCH(iterative)\n");
	int key = 11, search;
	search = *linear_search(numbers, &key, array_length);
	search == 1 ? printf("\t%d Found.\n", key): printf("\t%d Not found!\n", key);

	printf("LINEAR SEARCH(recursive)\n");
	key = 39;
	search = *l_search_recursive(numbers, &key, array_length, 0);
	search == 1 ? printf("\t%d Found.\n", key): printf("\t%d Not found!\n", key);

	/*Binary search iterative*/
	int *sorted_nums;
	printf("BINARY SEARCH(iterative)\n");
	key = -2;
	sorted_nums = bubble_sort(numbers, array_length);
	search = *binary_search(sorted_nums, &key, 0, array_length);
	search != -1 ? printf("\t%d Found.\n", key): printf("\t%d Not found!\n", key);

	/*Binary search recursive*/
	printf("BINARY SEARCH(recursive)\n");
	key = 5;
	sorted_nums = bubble_sort(numbers, array_length);
	search = *b_search_recursive(sorted_nums, &key, 0, array_length);
	search != -1 ? printf("\t%d Found.\n", key): printf("\t%d Not found!\n", key);

	printf("\n");

	/*Bubble sort*/
	printf("Bubble sorted array\n");
	sorted_nums = bubble_sort(numbers, array_length);
	print_array(sorted_nums, array_length);
	printf("\n");

	return 0;

}