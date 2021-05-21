#include <iostream>
 
using namespace std;
 
int main()
{
  short nilai;
 
  cout << "Input Nilai Anda (0 - 100): ";
  cin >> nilai;
 
  if (nilai >= 90 ) {
    cout << "Pertahankan!" << endl;
  }
  else if (nilai >= 80 && nilai < 90) {
    cout << "Harus lebih baik lagi" << endl;
  }
  else if (nilai >= 60 && nilai < 80) {
    cout << "Perbanyak belajar" << endl;
  }
  else if (nilai >= 40 && nilai < 60) {
    cout << "Jangan keseringan main" << endl;;
  }
  else if (nilai < 40) {
    cout << "Kebanyakan bolos..." << endl;
  }
  else {
    cout << "Maaf, format nilai tidak sesuai" << endl;
  }
 
  return 0;
}
