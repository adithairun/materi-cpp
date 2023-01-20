# include <iostream>
using namespace std;
int main ()
{
 int jum,i;
 char nm[20][15],al[25][25],hb[15][20];
 cout << "____________________________________________" <<endl;
 cout<<endl;
 cout << "- Nama : Aditya Nugraha Hairun -" <<endl;
 cout<<endl;
 cout << "____________________________________________" <<endl;
 cout << endl;
 cout<<"Input Jumlah Data : ";cin>>jum;
 cout<<""<<endl;
 for (i=1;i<=jum;i++)
{
 cout<<" Data ke : "<<i<<endl;
 cout<<" Nama : ";cin>>nm[i];
 cout<<" Alamat : ";cin>>al[i];
 cout<<" Hobi : ";cin>>hb[i];
 cout<<endl;
} cout<<"--------------------------------------------------------"<<endl;
cout<<"| No."<<" | Nama "<<" | Alamat " <<" | Hobi" << " "<<endl;
cout<<"--------------------------------------------------------"<<endl;
 for(i=1;i<=jum;i++)
{
 cout<<"| "<<i<<" | "<<nm[i]<<" | "<<al[i]<<"| "<<hb[i]<<" "<<endl;
}
 cout<<"---------------------------------------------------------"<<endl;
}
