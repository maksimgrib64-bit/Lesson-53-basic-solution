#include "logic.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};
	int row, column;

	do {
		system("cls");
		print("Input size of matrix(n*m):");
		cin >> row >> column;
	} while (row <= 0 or column <= 0);

	init(matrix, row, column, -10, 10);
	print("Matrix:\n");
	print(convert(matrix, row, column));
	int sum = sum1(matrix, row, column);
	print("\nExample of sum1:" + to_string(sum));
	 sum = sum2(matrix, row, column);
	print("\nExample of sum2:" + to_string(sum));
	sum=sum3(matrix, row, column);
	print("\nExample of sum3:" + to_string(sum));
	sum = sum4(matrix, row, column);
	print("\nExample of sum4:" + to_string(sum));
	return 0;
}