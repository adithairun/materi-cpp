#include <iostream>
 
using namespace std;
 
int main()
{
  int harga;
 
  cout << "Masukkan harga buku: ";
  cin  >> harga;
 
  cout << "Harga buku C++ setelah pajak: "<< (harga + 100) << endl;
  return 0;
}
