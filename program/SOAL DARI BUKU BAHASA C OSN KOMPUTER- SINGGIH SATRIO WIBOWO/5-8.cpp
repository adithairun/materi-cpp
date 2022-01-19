#include <iostream>
using namespace std;
 

int main()
{
int i, j, n;
cout << "Masukkan nilai n = ";
cin >> n;
int hasil;
for (i=0; i < (1 << n ); i++ )
{
	cout<<"Baris ke- "<< i+1 <<" = " ;
	for (j=0; j< n; j++)
	{
		if((i & (1 << j)) != 0)
		{
			cout<<"1";
		}
		else {
			cout<<"0";
		}
		
	}cout<<endl;
}

//SELESAI BEBERAPA PERLU DISESUAIKA BUNYI SOAL
}
