#include <iostream>
 
using namespace std;
 
int main()
{
  int a, b, c;
  a = 3;
  b = a;
  a = a + b;
  c = b + b + a;
 
  cout << a;
  cout << "\n";
 
  cout << b;
  cout << "\n";
 
  cout << c;
  cout << "\n";
 
  return 0;
}
