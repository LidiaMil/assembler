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

template < typename T>
 void task6_2(T * px, int CellCount)
 {
	const unsigned char* p	 = reinterpret_cast<const unsigned char*>(px);
	size_t BytesCount = sizeof(*px) * CellCount;
	cout << "Type: " << typeid(px).name()
		<< " Value: " << px << endl
		<< " Size: " << sizeof(px) << endl
		<< "Dump: " << hex << uppercase << setfill('0');
	
	for (size_t i = 0; i < BytesCount; ++i)
	{
		cout << setw(2) << static_cast<unsigned>(*(p + i)) << " ";
	}
	cout << dec << endl << endl;
}

void printDump(const void* p, std::size_t N)
{
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
	cout << endl << "---TASK 2---" << endl;
	cout << endl << "char x1 = 'abczklmn'" << endl;
	char* s_11 = (char*)"abczklmn";
    task6_2(s_11, 9);
    cout << endl << "wchar_t x2 = 'abczklmn'" << endl;
    wchar_t* s_12 = (wchar_t*)"abczklmn";
    task6_2(s_12, 9);
    cout << endl << "char x3 = 'абвёклмн'" << endl;
    char* s_21 = (char*)"абвёклмн";
    task6_2(s_21, 9);
    cout << endl << "wchar_t x4 = 'абвёклмн'" << endl;
    wchar_t* s_22 = (wchar_t*)"абвёклмн";
    task6_2(s_22, 9);
}

int main()
{	
    task5();
}
