#include <iostream>
 
using namespace std;
 
int main()
{
  int a, b, c, d, e;
 
  a = 5;
  b = 3;
  
  b = b + 1;
  c = a + b;
  d = c + c + a;
  e = (c + d)* a;
 
  cout << "Isi variabel a: " << a << endl;
  cout << "Isi variabel b: " << b << endl;
  cout << "Isi variabel c: " << c << endl;
  cout << "Isi variabel d: " << d << endl;
  cout << "Isi variabel e: " << e << endl;
 
  return 0;
}
