#include <iostream>
 
using namespace std;
 
int main()
{
  bool a = true;
  bool b = false;
  bool hasil;
 
  hasil = a && a;
  cout << "Hasil dari a && a : " << hasil << endl;
 
  hasil = a && b;
  cout << "Hasil dari a && b : " << hasil << endl;
 
  hasil = a || b;
  cout << "Hasil dari a || b : " << hasil << endl;
 
  hasil = b || b;
  cout << "Hasil dari b || b : " << hasil << endl;
 
  hasil = !a;
  cout << "Hasil dari !a : " << hasil << endl;
 
  hasil = !b;
  cout << "Hasil dari !b : " << hasil << endl;
 
  return 0;
}
