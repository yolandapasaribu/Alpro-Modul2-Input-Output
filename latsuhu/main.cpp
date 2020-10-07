#include <iostream>

using namespace std;

int main()
{
    int suhu;
    cout << "masukan besarnya suhu sekarang : " ;
    cin >> suhu;
    if (suhu<=0){
    cout << "Pada suhu " << suhu << " derajat celcius, air akan berwujud es" << endl ;
    }
    else if ((suhu>0) && (suhu<100)){
    cout << "Pada suhu " << suhu << " derajat celcius, air akan berwujud air" << endl ;
    }
    else {
    cout << "Pada suhu " << suhu << " derajat celcius, air akan berwujud gas" << endl ;
    }
    return 0;
}
