
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
   cout << "Ассемблер: " << endl;
   unsigned int x =10, y = 3, z, w;
   asm (
   "movl   (%[pX]), %%eax\n\t"
   "movl   (%[pY]), %%ebx\n\t"

   "subl   $23, %%ebx\n\t"
   "xorl    %%edx, %%edx\n\t"
   "divl   %%ebx\t"
   :"=a"(z), "=d"(w)
   :[pX]"r"(&x), [pY]"r"(&y)
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
