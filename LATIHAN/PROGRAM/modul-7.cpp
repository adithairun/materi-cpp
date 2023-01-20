#include<iostream>
using namespace std;
int main()
{
struct biodata {
char nim[10];
string nm;
char tmpat_lhir[25];
char tgl_lhir[25];
string al;
} data = { "531418044","Aditya Nugraha Hairun","Makassar","31-03-1995","Jl Kabila"};
cout<<"Nim :"<<data.nim<<endl;
cout<<"Nama :"<<data.nm<<endl;
cout<<"Tempat Lahir :"<<data.tmpat_lhir<<endl;
cout<<"Tanggal Lahir :"<<data.tgl_lhir<<endl;
cout<<"Alamat :"<<data.al<<endl;
}
