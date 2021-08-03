#include <iostream>
using namespace std;

int main(){
	int x,a;
   	string kata;
   	
	cout << "Masukkan kata : ";
	cin >> kata;
	a=kata.length();
	for(x=a-1; x<a; x++){
		cout << kata[x];
		}
	for(x=0; x<a-1; x++){
		cout << kata[x];
		}
   	return 0;
	}
