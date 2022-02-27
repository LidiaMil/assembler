#include <stdio.h> 
#include <iostream>
#include <cmath>
#include <climits>
#include <bitset>
#include <cstddef>
#include <string>
#include <iomanip>
#include <variant>

using namespace std;


template<typename T> 
void showForTask2(string typeName)
{
	cout << typeName << ":\t" << sizeof(T) << endl;
}

void task2()
{
	cout << endl << "---TASK 2---" << endl;
	showForTask2<char>("char");
	showForTask2<signed char>("signed char");
	showForTask2<unsigned char>("unsigned char");
	showForTask2<wchar_t>("wchar_t");
	showForTask2<short>("short");
	showForTask2<int>("int");
    showForTask2<unsigned int>("unsigned int");
	showForTask2<long>("long");
	showForTask2<unsigned long>("unsigned long");
	showForTask2<long long>("long long");
	showForTask2<unsigned long long>("unsigned long long");
	showForTask2<float>("float");
	showForTask2<double>("double");
	showForTask2<long double>("long double");
	showForTask2<size_t>("size_t");
	showForTask2<ptrdiff_t>("ptrdiff_t");
	showForTask2<void*>("void*");
	showForTask2<char*>("char*");
	showForTask2<int*>("int*");
	showForTask2<unsigned int*>("unsigned int*");
}


int main()
{	
	task2();
}
