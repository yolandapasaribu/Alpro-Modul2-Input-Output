#include <iostream> //suatu library menginput dan menghasilkan pada program c++
#include <iomanip> // suatu library manipulasi input output pada program c++

using namespace std; //untuk meringkas std pada program

int main() //program utama c++
{//fungsi buka
   cout << "Baris ini tanpa endl."; //mencetak hasil Baris ini tanpa endl.
   cout << "Manipulator endl" << endl; //mencetak hasil Manipulator endl
   int angka = 10; //membuat variabel bernama angka yang bertipe data integer dan berisi 10
   cout << dec << angka << endl; //mencetak hasil variabel angka dalam bentuk bilangan desimal
   cout << hex << angka << endl; //mencetak hasil variabel angka dalam bentuk bilangan heksadesimal
   cout << oct << angka << endl; //mencetak hasil variabel angka dalam bentuk bilangan oktal
   cout << setiosflags(ios::fixed); // untuk mengatur keluaran dalam bentuk desimal
   cout << setprecision(4) << 123.4567891 << endl; // setprecision(4) : mengatur angka dibelakang koma 4 angka dengan angka 123.4567891
    return 0; //menandakan bahwa program berjalan dengan baik
} // fungsi ditutup
