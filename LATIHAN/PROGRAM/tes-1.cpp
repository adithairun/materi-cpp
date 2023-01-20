#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
 int jumdata,i;
 int unit,total;
 struct{
 char kd_brg[10];
 string nm_brg;
 int unit;
 int harga;
 } barang[5];
 cout<<"Input Data Persediaan"<<endl;
 cout<<"Input Jumlah Data : ";cin>>jumdata;
 cout<<endl;
 for (i=1;i<=jumdata;i++)
 {
 cout<<"Kode Barang : ";cin>>barang[i].kd_brg;cin.ignore(255,'\n');;
 cout<<"Nama Barang : ";cin>>barang[i].nm_brg;cin.ignore(255,'\n');
 cout<<"Unit : ";cin>>barang[i].unit;cin.ignore(255,'\n');
 cout<<"Harga : ";cin>>barang[i].harga;
 cout<<endl;
};
 cout<<" Data Persediaan Toko XYZ"<<endl;
 cout<<"----------------------------------------------------------------"<<endl;
 cout<<"|No."<<"|Kd.Barang"<<" |Nama Barang "<<" |Unit " << " |Harga" << " |total "<<endl;
 cout<<"----------------------------------------------------------------"<<endl;
 for(i=1;i<=jumdata;i++)
{
cout<<"|"<<i<<" |" <<barang[i].kd_brg<< " |"<<barang[i].nm_brg<< " |" <<barang[i].unit<< " |"
<<barang[i].harga<<" |" <<barang[i].unit * barang[i].harga<<endl;
 
 cout<<"----------------------------------------------------------------"<<endl;
 total += barang[i].unit * barang[i].harga;
}
 cout<<"Total"<<" |"<<total<<endl;
 cout<<"----------------------------------------------------------------"<<endl;
}

