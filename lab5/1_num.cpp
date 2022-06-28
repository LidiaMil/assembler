#include <cstdio>
#include <iostream>
using namespace std;
int main() {
   cout << "Ассемблер: " << endl;
   unsigned int x =10, y = 3, z, w;
   asm (
   "movl   %[X], %%eax\n\t"
   "movl   %[Y], %%ebx\n\t"
   "subl   $23, %%ebx\n\t"
   "divl   %%ebx\n\t"
   :"=a"(z), "=d"(w)
   :[X]"m"(x), [Y]"m"(y)
   :"cc"
   );
   cout << "z = " << z << endl;
   cout << "w = " << w << endl << endl;
   cout << "C++: " << endl;
   z = x/(y-23);
   w = x%(y-23);
   cout << "z = " << z << endl;
   cout << "w = " << w << endl << endl;
   return 0;
}
