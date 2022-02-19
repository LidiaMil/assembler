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


union Bit16
{
    void* void15;
    short* short16;
    unsigned short* unsignedShort;
};

template<typename T>
void showForTask3(string showName, T t)
{
    Bit16 bit16 = {t};
	cout << ">>" << showName << ":\n";
    cout << "Unsigned hex: " << hex << *bit16.unsignedShort << endl; 
    cout.unsetf(ios::hex);
	cout << "Signed hex: " << hex << *bit16.short16 << endl; 
	cout.unsetf(ios::hex);
	cout << "Binary x16:   " << std::bitset<sizeof(*bit16.unsignedShort) * CHAR_BIT>(*bit16.unsignedShort) << endl;
 	cout << "Binary x16:   " <<  std::bitset<sizeof(*bit16.short16) * CHAR_BIT>(*bit16.short16) << endl;       
 	cout << "Unsigned dec: " << dec <<*bit16.unsignedShort  << endl; 
	cout.unsetf(ios::dec);
	cout << "Signed dec:   " <<  dec << *bit16.short16  << endl; 
    cout.unsetf(ios::dec);
}

union Bit32
{
    void* void32;
    float* float32;
    int* int32;
    unsigned int* unsignedInt;
    long* long32;
    unsigned long* unsignedLong;
};

template<typename T>
void showForTask4(string showName, T t)
{
    Bit32 bit32 = {t};
	cout << ">>" << showName << ":\n";
	cout << "Float fix: " << fixed << *bit32.float32 << endl;
	cout.unsetf(ios::fixed);
    cout << "Float exp: " << scientific << *bit32.float32 << endl<< endl;
    cout.unsetf(ios::scientific);
	cout << "Float hex: " << hex << *bit32.float32 << endl; 
    cout.unsetf(ios::hex);
    cout << "Int hex: " << hex << *bit32.int32 << endl;
    cout.unsetf(ios::hex);
    cout << "Unsigned Int hex: " << hex << *bit32.unsignedInt << endl; 
    cout.unsetf(ios::hex);
	cout << "Long hex: " << hex << *bit32.long32 << endl; 
	cout.unsetf(ios::hex);
	cout << "Unsigned Long hex: " << hex << *bit32.unsignedLong << endl; 
	cout.unsetf(ios::hex);
	
	cout << "Float binary x16:   " << std::bitset<sizeof(*bit32.float32) * CHAR_BIT>(*bit32.float32) << endl; 
	cout << "Int binary x16:   " << std::bitset<sizeof(*bit32.int32) * CHAR_BIT>(*bit32.int32) << endl; 
	cout << "Unsigned Int binary x16:   " << std::bitset<sizeof(*bit32.unsignedInt) * CHAR_BIT>(*bit32.unsignedInt) << endl;
 	cout << "Long Binary x16:   " <<  std::bitset<sizeof(*bit32.long32) * CHAR_BIT>(*bit32.long32) << endl; 
 	cout << "Unsigned Long  binary x16:   " << std::bitset<sizeof(*bit32.unsignedLong) * CHAR_BIT>(*bit32.unsignedLong) << endl; 
 	
 	cout << "Float dec: " << dec <<*bit32.float32  << endl; 
	cout.unsetf(ios::dec);
	cout << "Int dec: " << dec <<*bit32.int32  << endl; 
	cout.unsetf(ios::dec);
	cout << "Unsigned Int dec: " << dec <<*bit32.unsignedInt  << endl; 
	cout.unsetf(ios::dec);
 	cout << "Long dec: " << dec <<*bit32.long32  << endl; 
	cout.unsetf(ios::dec);
	cout << "Unsigned Long  dec:   " <<  dec << *bit32.unsignedLong  << endl; 
    cout.unsetf(ios::dec);
}


union Bit64
{
    void* void64;
    double* double64;
    long long* longLong;
    unsigned long long* unsignedLongLong;
};

template<typename T>
void showForTask42(string showName, T t)
{
    Bit64 bit64= {t};
	cout << ">>" << showName << ":\n";
	cout << "Double fixed: " << fixed << *bit64.double64 << endl;
    cout.unsetf(ios::fixed);
    cout << "Double exp: " << scientific << *bit64.double64 << endl<< endl;
    cout.unsetf(ios::scientific);

    cout << "Double hex: " << hex << *bit64.double64 << endl;
    cout.unsetf(ios::hex);
	cout << "Long long hex: " << hex << *bit64.longLong << endl;    
	cout.unsetf(ios::hex);
	cout << "Unsigned long long hex: " << hex << *bit64.unsignedLongLong << endl;    
	cout.unsetf(ios::hex);
	
	cout << "Double Binary x16: " << std::bitset<sizeof(*bit64.double64) * CHAR_BIT>(*bit64.double64) << endl;
	cout << "Long long Binary x16: " << std::bitset<sizeof(*bit64.longLong) * CHAR_BIT>(*bit64.longLong) << endl;       
 	cout << "Unsigned long long Binary x16: " <<  std::bitset<sizeof(*bit64.unsignedLongLong) * CHAR_BIT>(*bit64.unsignedLongLong) << endl;       
 	
 	cout << "Double dec: " << dec <<*bit64.double64  << endl; 
	cout.unsetf(ios::dec);
	cout << "Long long dec: " <<  dec << *bit64.longLong  << endl; 
    cout.unsetf(ios::dec);
    cout << "Unsigned long long  dec: " <<  dec << *bit64.unsignedLongLong  << endl; 
    cout.unsetf(ios::dec);
}

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


void print16(int16_t y,int16_t z)
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
	showForTask3("Y", &y);
	cout << endl;
	showForTask3("Z", &z);
}

void print32()
{
	cout << endl << "---TASK 4.1---" << endl;
	unsigned int minInt32UnS = 0;
	showForTask4("int минимальное целое 32-битное значение без знака", &minInt32UnS);
	cout << endl;
	unsigned int maxInt32UnS = UINT_MAX;
	showForTask4("int максимальное целое 32-битное значение без знака", &maxInt32UnS);
	cout << endl;
	int minInt32S = INT_MIN;
	showForTask4("int минимальное целое 32-битное значение со знаком", &minInt32S);
	cout << endl;
	int maxInt32S = INT_MAX;
	showForTask4("int максимальное целое 32-битное значение со знаком", &maxInt32S);
	cout << endl;
	int intX = 0x8A8B8C8D;
	showForTask4("int X", &intX);
	cout << endl;
	int intY = 6;
	showForTask4("int Y", &intY);
	cout << endl;
	int intZ = -3;
	showForTask4("int Z", &intZ);
	cout << endl;
	unsigned long minLong32U = 0;
	showForTask4("long минимальное 32-битное значение без знаком", &minLong32U);
	cout << endl;
	unsigned long maxLong32U = LONG_MAX;
	showForTask4("long максимальное 32-битное значение без знаком", &maxLong32U);
	cout << endl;
	long minLong32S = LONG_MIN;
	showForTask4("long минимальное 32-битное значение со знаком", &minLong32S);
	cout << endl;
	long maxLong32S = LONG_MAX;
	showForTask4("long максимальное 32-битное значение со знаком", &maxLong32S);
	cout << endl;
	float floatX = 0x8A8B8C8D;
	showForTask4("float X", &floatX);
	cout << endl;
	float floatY = 6;
	showForTask4("float Y", &floatY);
	cout << endl;
	float floatZ = -3;
	showForTask4("float Z", &floatZ);
	cout << endl;
}

void print64(int64_t x,int64_t y,int64_t z)
{
	cout << endl << "---TASK 4.2---" << endl;
	unsigned long long minInt32UnS = 0;
	showForTask42("минимальное целое 64-битное значение без знака", &minInt32UnS);
	cout << endl;
	unsigned long long maxInt32UnS = LLONG_MAX;
	showForTask42("максимальное целое 64-битное значение без знака", &maxInt32UnS);
	cout << endl;
	long long minInt32S = LLONG_MIN;
	showForTask42("минимальное целое 64-битное значение со знаком", &minInt32S);
	cout << endl;
	long long maxInt32S = LLONG_MAX;
	showForTask42("максимальное целое 64-битное значение со знаком", &maxInt32S);
	cout << endl;
	long long longlongX = 0x8A8B8C8D;
	showForTask42("long long X", &longlongX);
	cout << endl;
	long long longlongY = 6;
	showForTask42("long long Y", &longlongY);
	cout << endl;
	long long longlongZ = -3;
	showForTask42("long long Z", &longlongZ);
	cout << endl;
	double doubleX = 0x8A8B8C8D;
	showForTask42("double X", &doubleX);
	cout << endl;
	double doubleY = 6;
	showForTask42("double Y", &doubleY);
	cout << endl;
	double doubleZ = -3;
	showForTask42("double Z", &doubleZ);
	cout << endl;
}

void printDump(const void* p, std::size_t N)
{
    // cout << endl << p << endl;
    const char* const start = static_cast<const char*>(p);
    const char* const end = start + N;
    const char* line = start;
    while (line != end)
    {
        std::size_t lineLength = static_cast<std::size_t>(end - line);
        for (const char* i = line; i != end && i != line + N; ++i)
        {
            char ch = *i;
            if (i != line)
                cout << " ";
            cout.width(2);
            cout.fill('0');
            cout << hex << static_cast<int>(static_cast<unsigned char>(ch));
        }
        cout << std::endl;
        line += lineLength;
    }
    cout.unsetf(ios::hex);
}

void task5()
{
	cout << endl << "---TASK 5---" << endl;
    int x = 0x8A8B8C8D;
    printDump(&x, sizeof(x));
    int array[3];
    array[0] = 0x8A8B8C8D;
    array[1] = 6;
    array[2] = -3;
    printDump(&array, sizeof(array));
    double y = 6;
    printDump(&y, sizeof(y));
}

int main()
{	
	task2();
	print16(6,-3);
    print32();
    print64(0x8A8B8C8D,6,-3);
    task5();
}

