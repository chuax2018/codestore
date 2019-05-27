#include <iostream>
#include <string>
#include "codestore.h"
using namespace std;

void print_hello()
{
	cout << "C says hello!" << endl;
}

const char* print_string(const char* str)
{
	cout << str << endl;
	string line = string(str) + string(" from C returned");
	return line.c_str();
}

int add_two_int(int a, int b)
{
	return a + b;
}

float substract_two_float(float a, float b)
{
	return a - b;
}

int multi_two_int(int* a, int* b)
{
	return *a * *b;
}

