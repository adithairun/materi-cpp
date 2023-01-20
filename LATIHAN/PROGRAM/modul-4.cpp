#include<iostream>
using namespace std;
int main()
{
 int inp, nm, jm;
 float totl=0, rta;
 cout<<" Jumlah Mahasiswa : ";cin>>jm;
 for(inp=0; inp<jm; inp++){
 cout<<" Masukan Nilai "<<inp+1<<" : ";cin>>nm;
 totl=totl+nm;
 rta=totl/jm;
 }
 cout<<" Total "<<totl<<endl;
 cout<<" Rata-rata "<<rta<<endl;
}

