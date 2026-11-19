#include "logic.h"

int sum(int* array, int size) {
	int s = 0;
	for (int i = 0; i < size; i++)
	{
		s += array[i];
	}

	return s;
}

int get_row_with_max_sum(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	if (n<=1 or m<=1) {
		return -1;
	}


	int index_row = 0;

	for (int i = 0; i < n; i++)
	{
		int s1 = sum(matrix[i], m);
		int s2 = sum(matrix[index_row], m);
		if (s1 > s2) {
			index_row = i;
		}
	
	}
	return index_row + 1;
}