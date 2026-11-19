#include "logic.h"
int sum1(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column) {
	int s = 0;
	for (int i = 0; i < row - 1; i++) {
		for (int j = i+1; j < column; j++) {
			s += matrix[i][j];
		}
	}

	return s;
}