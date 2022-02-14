#include <iostream>
using namespace std;
//fungsi mengembalikan nilai max antara dua bilangan
int max(int num1, int num2){
 	int hasil;
 	if (num1 > num2)
 	hasil = num1;
 	else
 	hasil = num2;
 	return hasil;
 }
int main(){
	//definisi variabel lokal
int a = 100;
int b = 200;
int ret;
//panggil fungsi untuk mendapatkan nilai max
ret = max(a, b);
cout<< "Nilai Max adalah = " << ret;
}
 
