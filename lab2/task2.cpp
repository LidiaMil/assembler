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
    task5();
}
