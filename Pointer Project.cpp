#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int a;
    int *b;
    string x;
    a=97;
    b=&a;

    cout<<"SIAPA NAMA ANDA (Huruf Kapital Disarankan) = ";
    cin>>x;
    cout<<"\n\t\t====>>>WELCOME "<<x<<"<<<===="<<endl<<endl;

    cout<<"Tugas Pointer dalam Mata Kuliah Dasar-Dasar Pemrograman\n\t\tOleh Arief Rahmat Nur"<<endl<<endl;

    cout<<"Nilai Data       : "<<a<<endl;
    cout<<"Alamat Data      : "<<b<<endl<<endl;

    a=141;
    cout<<"Nilai Data       : "<<*b<<endl;
    cout<<"Alamat Data      : "<<b<<endl<<endl;

    a=61;
    cout<<"Nilai Data       : "<<*b<<endl;
    cout<<"Alamat Data      : "<<b<<endl<<endl;

    a=1100001;
    cout<<"Nilai Data       : "<<*b<<endl;
    cout<<"Alamat Data      : "<<b<<endl<<endl;

    cout<<"Jadi,ternyata pada alamat data "<<b<<" terdaoat 4 nilai data yang ada didalam alamat tersebut"<<endl;


    return 0;
}
