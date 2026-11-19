#include "util.h"
string convert(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column) {
	string s = " ";

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++)
		{
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}
	return s;
}



void init(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column, int a, int b) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++)
		{
			(matrix[i][j]) = rand() % (b - a + 1) + a;
		}
	}
}
void print(string text) {
	cout << text;
}