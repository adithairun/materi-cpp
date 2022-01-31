#include <iostream>

using namespace std;

main(){
    int nilai;

    cout<<"Masukkan nilai Rapor : ";cin>>nilai;
    switch (nilai)
    {
        case 92 ... 100 :
        	cout<< "Nilai = A";
        break;
        case 83 ... 91 :
        	cout<< "Nilai = B";
        break;
        case 75 ... 82 :
        	cout<< "Nilai = C";
        break;
        case 0 ... 74 :
        	cout<< "Nilai = D";
        break;
        default  :cout<<"Salah, nilai diluar jangkauan. \n";
    }

}
