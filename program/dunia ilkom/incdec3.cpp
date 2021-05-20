#include <iostream>
 
using namespace std;
 
int main()
{
  int a = 5;
  cout << "Post Decrement" << endl;
  cout << "Isi variabel a: " << a << endl;
  cout << "Isi variabel a: " << a-- << endl;
  cout << "Isi variabel a: " << a << endl;
 
  cout << endl;
 
  int b = 5;
  cout << "Pre Decrement" << endl;
  cout << "Isi variabel b: " << b << endl;
  cout << "Isi variabel b: " << --b << endl;
  cout << "Isi variabel b: " << b << endl;
 
  return 0;
}
