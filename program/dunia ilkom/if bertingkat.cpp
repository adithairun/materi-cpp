#include <iostream>
using namespace std;
main()
{
int a = 17;
int b = 33;

if (a == 17)
 //jika kondisi diatas benar, maka periksa dibawah ini 
{
	if (b == 3)
	{
		cout<< "Nilai a adalah 17 dan b adalah 33"; // jika b adalah 3 tampilkan tulisan disamping
	}
	else {
		cout << "Nilai a adalah 17, nilai b bukan 3"; // jika b bukan 3 tampilkan tulisan disamping
	}
}
else {
	cout<< "Nilai a bukan 17"; //jika a 17 tampilkan tulisan disamping
}
}


