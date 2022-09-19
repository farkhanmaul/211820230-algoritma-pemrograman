#include <iostream>
using namespace std;

void rekur (string kata, int a, int x){
	if (x==a-1){}
	else{
		cout << kata[x];      
		rekur (kata,a,x+1);
		}
	}
int main(){
   	int x,a;
   	string kata;
   	cout << "Masukkan kata : " ;
   	cin >> kata;
   	a =kata.length();
		for(x=a-1; x<a; x++){
		cout << kata[x];
		}
   	x = 0; 
   	rekur(kata,a,x);
	return 0;
	}
