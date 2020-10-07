#include <iostream> //suatu library menginput dan menghasilkan pada program c++
#include <string> //suatu library  program c++
using namespace std;//untuk meringkas std pada program c++

int main()//program utama c++
	{ //membuka fungsi
	    int bilangan; //membuat variabel bilangan bertipedata integer
	    char karakter; //membuat variabel karakter bertipedata char
	    string kata; //membuat variabel kata bertipedata string
	    string kalimat; //membuat variabel kalimat bertipedata string
	
	    cout << "Inputkan bilangan: "; //mencetak hasil berupa kalimat Inputkan bilangan:
		cin >> bilangan; //memasukan inputan sesuai variabel bilangan
	    cout << "Inputkan karakter: "; //menampilkan output kalimat Inputkan karakter:
	    cin >> karakter; //memasukan inputan sesuai variabel karakter
	    cout << "Inputkan kata: "; //mencetak hasil berupa kalimat Inputkan kata:
	    cin >> kata; //memasukan inputan sesuai variabel kata
	    cout<<"Inputkan kalimat: "; // mencetak hasil berupa kalimat Inputkan kalimat:
	    cin.ignore();//memisahkan cin, harus ada cin pada getline
	    getline(cin,kalimat); //untuk membiat kalimat atau untuk membuat kata lebih dari 2 (string)
	
	    cout<<endl<<"Data yang Anda inputkan adalah: "<<endl; // mencetak hasil berupa kalimat Data yang Anda inputkan adalah:
	    cout<<bilangan<<endl; //mencetak hasil inputan dari variabel bilangan
	    cout<<karakter<<endl;//mencetak hasil inputan dari variabel karakter
	    cout<<kata<<endl;//mencetak hasil inputan dari variabel kata
	    cout<<kalimat<<endl;//mencetak hasil inputan dari variabel kalimat
	    return 0; //menandakan bahwa program berjalan dengan baik atau tidak
	}//fungsi ditutup

