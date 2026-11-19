#include "test.h"
void test(int matrix[DEFAULT_SIZE][DEFAULT_SIZE],int n,int m,int expected,string test_name) {
	int actual = get_row_with_max_sum(matrix, n, m);
	string msg = test_name + "-->";
	msg += actual == expected ? "Pass" : "Fail";
	cout << msg << endl;
}
void test01() {
	const int row = 3;
	const int column = 4;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{1,2,3,4},
	    {9,8,7,6},
	    {5,6,7,8}
	};
	int expected = 2;
	test(matrix,row,column,expected,"test01");
}
void test02() {
	const int row = 3;
	const int column = 4;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{9,8,7,6},
		{1,2,3,4},
		{5,6,7,8}
	};
	int expected = 1;
	test(matrix, row, column, expected, "test02");
}
void test03() {
	const int row = 3;
	const int column = 4;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{	
		{1,2,3,4},
		{5,6,7,8},
		{9,8,7,6}
	};
	int expected = 3;
	test(matrix, row, column, expected, "test03");
}


void test04() {
	const int row = -3;
	const int column = 4;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{};
	int expected = -1;
	test(matrix, row, column, expected, "test04");
}
void test05() {
	const int row = 2;
	const int column = 3;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{1,2,3},
		{0,2,1},
		{1,2,3}
	};
	int expected = 1;
	test(matrix, row, column, expected, "test05");
}
void test06() {
	const int row = 2;
	const int column = 3;
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE]{
		{1,1,1},
		{1,1,1}
	};
	int expected = 1;
	test(matrix, row, column, expected, "test06");
}
void run_all_tests() {
	test01();
	test02();
	test03();
	test04();
	test05();
	test06();

}