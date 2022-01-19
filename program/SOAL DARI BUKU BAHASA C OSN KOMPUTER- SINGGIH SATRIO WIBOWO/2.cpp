#include <iostream>
using namespace std;
main()
{
int n,j;
n = 96;
j = n-1;
for (int i=j; i<=2; i--)
{
	n = i % n;
}

cout << n;

//SELESAI
}
