#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  cout << "Ассемблер: " << endl;
  unsigned short x =10, y = 3, z, w;
  asm (
  "movw   %[X], %%ax\n\t"
  "movw   %[Y], %%bx\n\t"
  "subw   $23, %%bx\n\t"
  "divw   %%bx\n\t"
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
