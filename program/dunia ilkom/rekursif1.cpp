#include <iostream>
using namespace std;
int pangkat(int a, int b){
 int hasil = a;
 for (int i = 1 ; i < b; i++){
 	hasil = hasil * a;
 }
 return hasil;
}

int main (){
int a = 2;
int b = 3;	

cout << pangkat(a,b) ;
}

