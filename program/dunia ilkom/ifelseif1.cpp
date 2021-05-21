#include <iostream>
 
using namespace std;
 
int main()
{
  char nilai;
 
  cout << "Input Nilai Anda (A - E): ";
  cin >> nilai;
 
  if (nilai == 'A' ) {
    cout << "Pertahankan!" << endl;
  }
  else if (nilai == 'B' ) {
    cout << "Harus lebih baik lagi" << endl;
  }
  else if (nilai == 'C' ) {
    cout << "Perbanyak belajar" << endl;
  }
  else if (nilai == 'D' ) {
    cout << "Jangan keseringan main" << endl;
  }
  else if (nilai == 'E' ) {
    cout << "Kebanyakan bolos..." << endl;
  }
  else {
    cout << "Maaf, format nilai tidak sesuai" << endl;
  }
 
  return 0;
}
