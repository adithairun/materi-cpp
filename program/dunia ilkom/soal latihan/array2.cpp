#include <iostream>
 
using namespace std;
 
int main()
{
  int jagung[] = {45,47,899,45,123,4,6,411,25,644,20,700,45};
  int ayam[] = {20,74,58,96,344,15,63,742,58,64,125,48};
  int ular = ayam [4] + jagung[3] - jagung [6];
  cout << "Berapa hasil " << ular % 10 << endl;
cout << "Berapa hasil " << ular % 10 * (10) + ayam [5] << endl;

cout << "Berapa hasil " << ayam [4] + ular * jagung[3] / jagung[7] << endl;
  return 0;
}



