#include <iostream>
using namespace std;
int adadeh(int n){
	int i,j,k;
	int iadadeh = 0;
	for (i=1; i<=n; i++)
		for (j=1; j<=n+1; j++)
			for (k; k<=n+2; k++)
				iadadeh = iadadeh + 1;
				
		return (iadadeh / 6);
}
main()
{
	int x;
	x= adadeh(10);
cout<< x;

//MASIH BELUM KELUAR HASIL
}
