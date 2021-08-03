#include <iostream>
#include <string>
using namespace std;

int main(){
   	int baris, c, a, hasil, kolom, d, b;
   	cout << "Masukkan banyak baris : ";
   	cin >> baris;
   	cout << "Masukkan banyak kolom : ";
   	cin >> kolom;
   	a =1;
   	d =1;
   	hasil =0;
   	b =1;
   	c =1;
   	int data1[baris][kolom] ;
   	int data2[baris][kolom] ;
   	int array[100];
   	while (!(a>baris)){
      	b =1;
      	while (!(b>kolom)){
         	cout << "Matriks ["<<a<<"] ["<<b<<"] = ";
         	cin >> data1[a][b];
         	b =b+1;
      		}
      	a =a+1;
   		}
   	cout << "Data array dua dimensi sebelum di urutkan" << endl;   
	a =1;
   	while (!(a>baris)){
      	b =1;
      	while (!(b>kolom)){
         	cout << data1[a][b]<<" ";         
			b =b+1;
      		}
      	cout << " " << endl;      
		a =a+1;
   		}
   	a =1;
   	while (!(a>baris)){
      	b =1;
      	while (!(b>kolom)){
         	array[c] = data1[a][b];
         	b =b+1;
         	c =c+1;
      		}
      	a =a+1;
   		}
   	cout << "" << endl;   
	cout << "Data array dua dimensi setelah di urutkan" << endl;   
	a =1;
   	while (!(a>(baris*kolom))){
      	b =1;
      	while (!(b>(baris*kolom)-1)){
         	if (array[b]>array[b+1]){
            	hasil =array[b];
            	array[b] = array[b+1];
            	array[b+1] = hasil;
         		}
         	else{}
        	b =b+1;
      		}
      	a =a+1;
   		}
   	a =1;
   	while (!(a>baris)){
      	b =1;
      	while (!(b>kolom)){
         	data2[a][b] = array[d];
         	b =b+1;
         	d =d+1;
      		}
      	a =a+1;
   		}
   	a =1;
   	while (!(a>baris)){
      	b =1;
      	while (!(b>kolom)){
         	cout << data2[a][b]<<" ";         
			b =b+1;
      		}
      	cout << " " << endl;      
		a =a+1;
   		}
   	return 0;
	}
