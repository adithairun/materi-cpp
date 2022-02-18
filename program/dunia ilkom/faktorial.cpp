#include<iostream>
using namespace std;
//FUNGSI FAKTORIAL
int faktorial(int x) {  
if (x == 1) {
return 1;
} else {
return x * faktorial(x-1);
}
}

int main()

{

int bil,x;
cout<< "masukkan jumlah N! = ";
cin>>x;

bil = faktorial(x);
cout<<"Hasil Faktorial "<<x<<"! = "<<bil;
 
}
