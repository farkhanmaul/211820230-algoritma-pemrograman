#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int x,a;
   	string kata;
   	
	cout << "Masukkan kata :" << endl;
	cin >> kata;
	a = kata.length();
	cout << a << endl;
	cout << kata[a] << endl;
	x=0;
		while (x!=a){
		cout << kata[a] ;   
		x = x+1;
		}
		while (x!=a){
		cout << kata[x] ;   
		x = x+1;
		}
   	return 0;
	}
