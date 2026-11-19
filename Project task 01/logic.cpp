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

int sum2(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column) {
	int s = 0;
	for (int i = 1; i < row; i++) {
		for (int j = 0; j < i; j++) {
			s += matrix[i][j];
		}
	}

	return s;
}

int sum3(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column) {
	int s = 0;
	for (int i = 0; i < row; i++) {
			s += matrix[i][i];
	}

	return s;
}

int sum4(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column) {
	int s = 0;
	for (int i = 0; i < row; i++) {
		s += matrix[i][row-1-i];
	}

	return s;
}

