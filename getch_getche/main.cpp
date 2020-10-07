#include <iostream> ////suatu library menginput dan menghasilkan pada program c++
#include <conio.h> //untuk membuat teks antarmuka user

using namespace std;//untuk meringkas std pada program c++

int main()//program utama c++
{ //membuka fungsi
    char karakter; //membuat variabel karakter dengan tipe data char

    cout<<"Masukan sebuah karakter: "; //mencetak hasil berupa kalimat masukkan sebuah karakter:
    karakter = getch(); //memasukkan sebuah karakter dan tanpa diakhiri dengan enter
    cout<<endl<<"Hasil fungsi getch "<<karakter<<endl; //menghasilkan output hasil fungsi getch dari variabel karakter

    cout<<"Masukkan sebuah karakter: "; // mencetak hasil kalimat Masukkan sebuah karakter
    karakter = getche(); // inputan dari var karakter tetapi inputan tersebut tertulis 
    cout<<endl<<"Hasil fungsi getche "<<karakter<<endl; //menghasilkan output hasil fungsi getche dari inputan karakter
    return 0; // /menandakan bahwa program berjalan dengan baik atau tidak
} //menutup fungsi
