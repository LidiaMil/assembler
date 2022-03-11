#include <iostream>
#include <sstream>
#include <bitset>
#include <climits>
#include <cstddef>

using namespace std;

void print16(void *p)
{
    cout<<std::hex << *((unsigned short*)p)<<endl<<
    std::bitset<16>{*((unsigned short*)p) }<<endl<<
    std::dec << *((unsigned short*)p) <<endl<<
    std::hex << *((short*)p) <<endl<<
    std::bitset<16>{*((short*)p) }<<endl<<
    std::dec << *((short*)p) <<endl;
}

void print32(void *p)
{
    cout<<std::hex << *((unsigned int*)p)<<endl<<
    std::bitset<32>{*((unsigned int*)p) }<<endl<<
    std::dec << *((unsigned int*)p) <<endl<<
    std::hex << *((int*)p) <<endl<<
    std::bitset<32>{*((int*)p) }<<endl<<
    std::dec << *((int*)p) <<endl<<
    fixed<<*((float*)p)<<endl<<
    scientific<<*((float*)p)<<endl;
}

void print64(void *p)
{
    cout<<std::hex << *((unsigned long long*)p)<<endl<<
    std::bitset<8>{*((unsigned long long*)p) }<<endl<<
    std::dec << *((unsigned long long*)p) <<endl<<
    std::hex << *((long long*)p) <<endl<<
    std::bitset<8>{*((long long*)p) }<<endl<<
    std::dec << *((long long*)p) <<endl<<
    fixed<<*((double*)p)<<endl<<
    scientific<<*((double*)p)<<endl;
}

void print_dump(void *p,size_t N){
    for(int i =0;i<N;i++){
        if((unsigned short)(*((char *)(p+i)))>=0xff00){
            cout<< "0x"<<std::hex <<(unsigned short)(*((char *)(p+i)))-0xff00<<endl;
        }
        else{
            cout<< "0x"<<std::hex <<(unsigned short)(*((char *)(p+i)))<<endl;
        }
    }
}

int main()
{
    cout<<"\n\nЗадание 2__________"<<endl;
    cout<<"char: "<<sizeof(char)<<endl;
    cout<<"signed char: "<<sizeof(signed char)<<endl;
    cout<<"usigned char: "<<sizeof(unsigned char)<<endl;
    cout<<"wchar_t: "<<sizeof(wchar_t)<<endl;
    cout<<"short: "<<sizeof(short)<<endl;
    cout<<"unsigned short: "<<sizeof(unsigned short)<<endl;
    cout<<"int: "<<sizeof(int)<<endl;
    cout<<"unsigned int: "<<sizeof(unsigned int)<<endl;
    cout<<"long: "<<sizeof(long)<<endl;
    cout<<"unsigned long: "<<sizeof(unsigned long)<<endl;
    cout<<"long long: "<<sizeof(long long)<<endl;
    cout<<"unsigned long long: "<<sizeof(unsigned long long)<<endl;
    cout<<"float: "<<sizeof(float)<<endl;
    cout<<"double: "<<sizeof(double)<<endl;
    cout<<"long double: "<<sizeof(long double)<<endl;
    cout<<"size_t: "<<sizeof(size_t)<<endl;
    cout<<"ptrdiff_t: "<<sizeof(ptrdiff_t)<<endl;
    cout<<"void*: "<<sizeof(void*)<<endl;
    cout<<"char*: "<<sizeof(char*)<<endl;
    cout<<"int*: "<<sizeof(int*)<<endl;
    cout<<"unsigned int*: "<<sizeof(unsigned int*)<<endl;

    cout<<"\n\nЗадание 3__________"<<endl;
    short temp = 1;
    print16((void*)&temp);

    cout<<"Минимальное целое 16-битное значение без знака"<<endl;
    unsigned short a = 0;
    print16((void*)&a);

    cout<<"Максимальное целое 16-битное значение без знака"<<endl;
    unsigned short b = USHRT_MAX;
    print16((void*)&b);

    cout<<"Минимальное целое 16-битное значение со знаком"<<endl;
    short c = SHRT_MIN;
    print16((void*)&c);

    cout<<"Максимальное целое 16-битное значение со знаком"<<endl;
    short d = SHRT_MAX;
    print16((void*)&d);

    cout<<"Значение y"<<endl;
    short y=6;
    print16((void*)&y);

    cout<<"Значение z"<<endl;
    short z=-3;
    print16((void*)&z);

    cout<<"\n\nЗадание 4(для print32)__________"<<endl;
    cout<<"Минимальное целое значение без знака соответствующего размера"<<endl;
    unsigned int a1=0;
    print32((void*)&a1);

    cout<<"Максимальное целое значение без знака соответствующего размера"<<endl;
    unsigned int b1=UINT32_MAX;
    print32((void*)&b1);

    cout<<"Минимальное целое значение со знаком соответствующего размера"<<endl;
    int c1=INT32_MIN;
    print32((void*)&c1);

    cout<<"Максимальное целое значение со знаком соответствующего размера"<<endl;
    int d1=INT32_MAX;
    print32((void*)&d1);

    cout<<"Значение x"<<endl;
    int x1=0x8A8B8C8D;
    print32((void*)&x1);

    cout<<"Значение y"<<endl;
    int y1=6;
    print32((void*)&y1);

    cout<<"Значение z"<<endl;
    int z1=-3;
    print32((void*)&z1);

    cout<<"Значение x с плавающей запятой"<<endl;
    float x2=0x8A8B8C8D;
    print32((void*)&x2);

    cout<<"Значение y с плавающей запятой"<<endl;
    float y2=6;
    print32((void*)&y2);

    cout<<"Значение z с плавающей запятой"<<endl;
    float z2=-3;
    print32((void*)&z2);

    cout<<"\n\nЗадание 4(для print64)__________"<<endl;
    cout<<"Минимальное целое значение без знака соответствующего размера"<<endl;
    unsigned long long a2=0;
    print32((void*)&a2);

    cout<<"Максимальное целое значение без знака соответствующего размера"<<endl;
    unsigned long long b2=ULLONG_MAX;
    print64((void*)&b2);

    cout<<"Минимальное целое значение со знаком соответствующего размера"<<endl;
    long long c2=LLONG_MIN;
    print32((void*)&c2);

    cout<<"Максимальное целое значение со знаком соответствующего размера"<<endl;
    long long d2=LLONG_MAX;
    print32((void*)&d2);

    cout<<"Значение x"<<endl;
    long long x3=0x8A8B8C8D;
    print32((void*)&x3);

    cout<<"Значение y"<<endl;
    long long y3=6;
    print32((void*)&y3);

    cout<<"Значение z"<<endl;
    long long z3=-3;
    print32((void*)&z3);

    cout<<"Значение x с плавающей запятой"<<endl;
    double x4=0x8A8B8C8D;
    print32((void*)&x4);

    cout<<"Значение y с плавающей запятой"<<endl;
    double y4=6;
    print32((void*)&y4);

    cout<<"Значение z с плавающей запятой"<<endl;
    double z4=-3;
    print32((void*)&z4);
    
    cout<<"\n\nЗадание 5__________"<<endl; //прямой порядок
    int x5=0x8A8B8C8D; 
    int x6=0x11223344;
    print_dump((void*)&x5, sizeof(int));
    cout<<endl;
    print_dump((void*)&x6, sizeof(int));
    cout<<"\nМассив"<<endl;
    int y6=6, z6=-3;
    int mas[3]={x5, y6, z6};
    print_dump(mas, sizeof(int)*3);

    cout<<"\nDouble"<<endl;
    double y7=6;
    print_dump((void*)&y7, sizeof(double));
}