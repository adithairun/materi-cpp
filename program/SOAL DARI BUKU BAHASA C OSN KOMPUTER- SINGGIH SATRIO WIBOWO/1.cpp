#include <iostream>
using namespace std;
main()
{
int ayam = 100;
int bebek = 5;

do {
	bebek = bebek + 1;
	ayam = ayam - bebek;
} while (ayam <= bebek);
cout << ayam <<" "<< bebek;

//SELESAI
}
