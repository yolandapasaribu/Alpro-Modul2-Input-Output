#include <iostream> 
#include <iomanip> 

using namespace std; 

int main() 
{
	float bilangan;
	
	cout<<"Inputkan bilangan : ";
	cin>>bilangan;
	
	cout << setiosflags(ios::fixed); 
	cout << setprecision(2) << bilangan << endl; 
    return 0; 
} 
