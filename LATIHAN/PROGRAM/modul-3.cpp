#include<iostream>
using namespace std;
int main()
{
 string nm;
 char stts;
 short ja;
 int ti, ta, gp, gb;
 cout<<"====================================="<<endl;
 cout<<" Menghitung Gaji Karyawan "<<endl;
  cout<<"====================================="<<endl;
 cout<<" Status : 1=Menikah, 2=Belum Menikah "<<endl;
 cout<<"====================================="<<endl;
 cout<<" Nama :";getline(cin,nm);
 cout<<" Status :";cin>>stts;
 cout<<" Jumlah Anak :";cin>>ja;
 cout<<" Gaji Pokok :";cin>>gp;
 if(stts=='1') ti=gp*0.1;
 else if(stts=='2') ti=0;
 if(ja<2) ta=gp*0.05;
 else if(ja>=2) ta=gp*0.1;
 gb=ta+ti+gp;
 cout<<" Nama :"<<nm<<endl;
 cout<<" Status :"<<stts<<endl;
 cout<<" Jumlah Anak :"<<ja<<endl;
 cout<<" Gaji Pokok :"<<gp<<endl;
 cout<<" Gaji Bersih :"<<gb<<endl;
}
