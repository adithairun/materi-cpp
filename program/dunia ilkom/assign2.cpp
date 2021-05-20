#include <iostream>
 
using namespace std;
 
int main()
{
  int a = 10, b = 10, c = 10, d = 10, e = 10, f = 10;
 
  cout << "Operator assignment gabungan bahasa C++" << endl;
  cout << "========================================" << endl;
  cout << "Variabel a, b, c, d, e, f = 10" << endl;
  cout << endl;
 
  a += 5;
  b -= 3;
  c *= 3;
  d /= 3;
  e %= 3;
  f <<= 2;
 
  cout << "Hasil operasi a += 5: "  << a << endl;
  cout << "Hasil operasi b -= 3: "  << b << endl;
  cout << "Hasil operasi c *= 3: "  << c << endl;
  cout << "Hasil operasi d /= 3: "  << d << endl;
  cout << "Hasil operasi e %= 3: "  << e << endl;
  cout << "Hasil operasi f <<= 2: " << f << endl;
 
  return 0;
}
