#include <stdio.h> 
#include <iostream>
#include <cmath>
#include <climits>
#include <bitset>
#include <cstddef>
#include <string>
#include <iomanip>

using namespace std;

template<typename T> 
void showForTask7(string typeName)
{
	cout << typeName << ":\t" << sizeof(T) << endl;
}


/*При помощи оператора sizeof языка С/С++ выясните,
сколько байтов занимают переменные следующих типов языка С/С++: char,
signed char, unsigned char, wchar_t, short, unsigned short, int,
unsigned int, long, unsigned long, long long, unsigned long long,
float, double, long double, size_t, ptrdiff_t, void*, char*, int*,
unsigned int* на выбранной платформе.
Обратите внимание на размеры целочисленных типов и чисел с плавающей
запятой. Какие из них имеют разрядность 16, 32, 64 бита, учитывая, что байт
x86/x86-64 — октет (8 бит)?
*/

void task2()
{
	cout << endl << "---TASK 2---" << endl;
	showForTask7<char>("char");
	showForTask7<signed char>("signed char");
	showForTask7<unsigned char>("unsigned char");
	showForTask7<wchar_t>("wchar_t");
	showForTask7<short>("short");
	showForTask7<int>("int");
    showForTask7<unsigned int>("unsigned int");
	showForTask7<long>("long");
	showForTask7<unsigned long>("unsigned long");
	showForTask7<long long>("long long");
	showForTask7<unsigned long long>("unsigned long long");
	showForTask7<float>("float");
	showForTask7<double>("double");
	showForTask7<long double>("long double");
	showForTask7<size_t>("size_t");
	showForTask7<ptrdiff_t>("ptrdiff_t");
	showForTask7<void*>("void*");
	showForTask7<char*>("char*");
	showForTask7<int*>("int*");
	showForTask7<unsigned int*>("unsigned int*");
// 	showForTask7<bool>("bool");
}


int main()
{	
	task2();

}