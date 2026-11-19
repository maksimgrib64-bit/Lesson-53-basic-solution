#include "logic.h"
int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};
	int row, column;

	do {
		system("cls");
		print("Input size of matrix(n*m):");
		cin >> row >> column;
	} while (row <= 0 or column <= 0);

	init(matrix, row, column, -9, 9);
	print("Matrix:\n");
	print(convert(matrix, row, column));


	return 0;
}