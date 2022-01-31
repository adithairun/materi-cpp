#include <iostream>

using namespace std;
//latihan for menentukan bilangan genap
main(){
int n , i, x;

cout << " input batas : ";
cin >> n;	
cout << "bilangan genap antara 1 - " << n << " adalah " << endl;
for(int i=1;i<=n;i++){
		if (i%2==0)
		cout<<i<<" ";
}
}
