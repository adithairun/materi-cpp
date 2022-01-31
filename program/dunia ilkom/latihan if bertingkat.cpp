#include <iostream>
using namespace std;
main()
{
int umur;

cout << "Masukkan Umur : " ; 
cin >> umur;


if (umur <= 18)
 //jika kondisi diatas benar, maka periksa dibawah ini 
{
	if (umur <= 10 )
	{
		cout<< "Anak-anak"; // jika umur <= 10 tampilkan tulisan disamping
	}
	else {
		cout << "Remaja"; // jika  umur bukan <= 10  tampilkan tulisan disamping
	}
}
else {
	cout<< "Bukan usia anak maupun remaja"; //jika umur bukan <= 18 tampilkan tulisan disamping
}
}


