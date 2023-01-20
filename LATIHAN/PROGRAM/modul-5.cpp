#include<iostream>
#include<conio.h>
using namespace std;
int main() {
long i,bil,fak;
fak=1;
cout<< "------- Menghitung Faktorial ----------- "<<endl;
cout<<""<<endl;
cout<<"Masukan Bilangan :";cin>>bil;
if(bil==0){
 cout<<""<<endl;
cout<<"-------------Hasil Faktorial------------"<<endl;
cout<<""<<endl;
cout<<"Faktorial Dari :"<<bil<<endl;
cout<<"Adalah :"<<fak<<endl;
}
else {
for (i=1; i<=bil; i++) {
fak=fak*i;
}
cout<<""<<endl;
cout<<"-------------Hasil Faktorial------------"<<endl;
cout<<""<<endl;
cout<<"Faktorial Dari :"<<bil<<endl;
cout<<"Adalah :"<<fak<<endl;
}
}

