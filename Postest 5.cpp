#include <iostream>
using namespace std;

void deret (int i,float hasil,int n){
   	if (i>n){
      	cout << " = "<< hasil << endl;}
   	else{
      	if (i % 2==0){
         	cout << " -"<<"1/"<<i;         
			hasil = hasil- float (1)/i;}
      	else{
         	if (i<2){
            	cout << i;            
				hasil = hasil + float (1)/i;}
         	else{
            	cout << " +"<<"1/"<<i;            
				hasil = hasil+float (1)/i;}
      	}
      	deret(i+1,hasil,n);
   		}
	}
	
int main(){
	   float hasil = 0;
	   int n, i = 1;
	   cout << "Masukkan n : ";
	   cin >> n;
	   deret(i,hasil,n);
	   return 0;
	}
