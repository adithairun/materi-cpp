#include <iostream>
 
using namespace std;
 
int main()
{
  int a;
 
  cout << "Input nilai ujian (0 - 100): ";
  cin >> a;
 
  if (a >= 75) {
    cout <<"Selamat, anda lulus!" << endl;
  }
  else {
    cout << "Maaf, silahkan coba lagi tahun depan" << endl;
  }
 
  return 0;
}
