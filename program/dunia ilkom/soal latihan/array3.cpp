#include <iostream>
 
using namespace std;
 
int main()
{
	
int tikus[] = {3,4,6,4,22,65,454,89,233,123,765,45,789,2334,45,34,12,45,24,32,67,23,12,56,88};
int kucing = tikus[15], keju = kucing + tikus [13], coklat = keju + tikus[7];	
int jagung[] = {45,47,899,45,123,4,6,411,25,644,20,700,45};
int ayam[] = {20,74,58,96,344,15,63,742,58,64,125,48};
int ular = ayam [4] + jagung[3] - jagung [6];
  

cout << "Berapa hasil " << ular - ayam [3] * jagung[3] + kucing * tikus [5]  + (keju+keju)<< endl;
cout << "Berapa hasil " << (keju+keju) * (ayam[5] + tikus[8]) / coklat<< endl;

  return 0;
}



