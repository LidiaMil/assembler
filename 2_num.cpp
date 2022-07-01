#include <cstdio>
#include <iostream>
using namespace std;
int main() {
   cout << "Ассемблер: " << endl;
   unsigned int x =10, y = 3, z, w;
   asm (
   "subl   $23, %[Y]\n\t"
   "divl   %[Y]\n\t"
   "movl   %%edx, %%ebx\n\t"
   :"=a"(z), "=b"(w)
   :[X]"a"(x), [Y]"r"(y)
   :"cc","edx"
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
