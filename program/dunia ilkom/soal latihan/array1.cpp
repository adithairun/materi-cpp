#include <iostream>
 
using namespace std;
 
int main()
{
  int tikus[] = {3,4,6,4,22,65,454,89,233,123,765,45,789,2334,45,34,12,45,24,32,67,23,12,56,88};
  int kucing = tikus[15], keju = kucing + tikus [13], coklat = keju + tikus[7];
  
  cout << "Berapa hasil " << coklat + keju - tikus[4] << endl;
  cout << "Berapa hasil " <<tikus[13] + keju - tikus[18] * kucing << endl;
  
  cout << "Berapa hasil " << tikus[7] / tikus[3] + kucing * tikus[11] * tikus[3] << endl;
  return 0;
}



