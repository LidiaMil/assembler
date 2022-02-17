#include <stdio.h> 
#include <iostream>
#include <cmath>
#include <climits>
#include <bitset>
#include <cstddef>
#include <string>
#include <iomanip>

using namespace std;


union Bit16
{
    void* checking;
    short* sht;
    unsigned short* usht;
};
// void showForTask3(string showName, int32_t num)
template<class T>
void showForTask3(string showName, T t)
{
    Bit16 s = {t};
	cout << ">>" << showName << ":\n";
// 	cout << "Unsigned hex: " << hex << (uint16_t)num << endl; //беззнаковую интерпретацию в шестнадцатеричном представлении
// 	cout << "Signed hex: " << hex << (int16_t)num << endl;    //знаковую интерпретацию в шестнадцатеричном представлении
// 	cout << "Binary x16:   " << bitset<16>(num) << endl;      //беззнаковую интерпретацию в двоичном представлении; 
// 	//знаковую интерпретацию в двоичном представлении;  ???????????
//  	cout << "Binary x16:   " << bitset<16>(num) << endl;      //знаковую интерпретацию в двоичном представлении;  
//  	cout << "Unsigned dec: " << dec << (uint16_t)num << endl; //беззнаковую интерпретацию в десятичном представлении;
// 	cout << "Signed dec:   " << dec << (int16_t)num << endl;  //знаковую интерпретацию в десятичном представлении. 
    cout << "Unsigned hex: " << hex << *s.usht << endl; //беззнаковую интерпретацию в шестнадцатеричном представлении
    cout.unsetf(ios::hex);
	cout << "Signed hex: " << hex << *s.sht << endl;    //знаковую интерпретацию в шестнадцатеричном представлении
	cout.unsetf(ios::hex);
	cout << "Binary x16:   " << std::bitset<sizeof(*s.usht) * CHAR_BIT>(*s.usht) << endl;      //беззнаковую интерпретацию в двоичном представлении; 
 	cout << "Binary x16:   " <<  std::bitset<sizeof(*s.sht) * CHAR_BIT>(*s.sht) << endl;      //знаковую интерпретацию в двоичном представлении;  
 	cout << "Unsigned dec: " << dec <<*s.usht  << endl; //беззнаковую интерпретацию в десятичном представлении;
	cout.unsetf(ios::dec);
	cout << "Signed dec:   " <<  dec << *s.sht  << endl; 
    cout.unsetf(ios::dec);
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

/*
Изучите, как интерпретируется одна и та же область памяти,
если она рассматривается как знаковое или беззнаковое целое число, а также —
как одно и то же число записывается в различных системах счисления.
Для этого на языке C/C++ разработайте функцию void 𝑝𝑟𝑖𝑛𝑡16(void * 𝑝),
которая печатает для 16-битной области памяти по заданному адресу 𝑝:
а) целочисленную беззнаковую интерпретацию в шестнадцатеричном представлении; 
б) целочисленную беззнаковую интерпретацию в двоичном представлении; 
в) целочисленную беззнаковую интерпретацию в десятичном представлении;
г) целочисленную знаковую интерпретацию в шестнадцатеричном представлении;
д) целочисленную знаковую интерпретацию в двоичном представлении;
е) целочисленную знаковую интерпретацию в десятичном представлении. 
*/

void print16(int16_t x,int16_t y,int16_t z)
{
	cout << endl << "---TASK 3---" << endl;
	unsigned short minInt16UnS = 0;
	showForTask3("минимальное целое 16-битное значение без знака", &minInt16UnS);
	cout << endl;
	unsigned short maxInt16UnS = (unsigned short)USHRT_MAX;
	showForTask3("максимальное целое 16-битное значение без знака", &maxInt16UnS);
	cout << endl;
	short minInt16S = SHRT_MIN;
	showForTask3("минимальное целое 16-битное значение со знаком", &minInt16S);
	cout << endl;
	short maxInt16S = SHRT_MAX;
	showForTask3("максимальное целое 16-битное значение со знаком", &maxInt16S);
	cout << endl;
	showForTask3("X", &x);
	cout << endl;
	showForTask3("Y", &y);
	cout << endl;
	showForTask3("Z", &z);
}

int main()
{	
	task2();
	print16(0x8A8B8C8D,6,-3);

}

