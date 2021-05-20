#include <iostream>
 
using namespace std;
 
int main()
{
  bool hasil;
 
  hasil = (false && true) || (true || false);
  cout << "Hasil: " << hasil << endl;
 
  hasil = !false && (false || true);
  cout << "Hasil: " << hasil << endl;
 
  hasil = ((true && true) || (true || false)) && !true;
  cout << "Hasil: " << hasil << endl;
 
  return 0;
}
