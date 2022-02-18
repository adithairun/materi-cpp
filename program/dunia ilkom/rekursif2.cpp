#include <iostream>
using namespace std;
int pangkatrekursif(int a, int b){
	if (b<=1){
		return a;
	}else
 return a * pangkatrekursif(a, (b-1));
}

int main (){

cout << pangkatrekursif(2,5) ;
}


