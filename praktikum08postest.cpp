#include <iostream>
using namespace std;

int main(){
   	int baris, a, hasil, k, kolom, d, b;

   	cout << "Masukkan banyak baris : ";
   	cin >> baris;
   	cout << "Masukkan banyak kolom : ";
   	cin >> kolom;
   	a =1;
   	k =1;
   	hasil =0;
   	b =1;
   	d =1;
   	int data[baris][kolom];
   	int f[baris][kolom];
   	int array[100];
   	while (!(a>baris)){
      	b =1;
      	while (!(b>kolom)){
         	cout << "Matriks ["<<a<<"] ["<<b<<"] = " ;
         	cin >> data[a][b];
         	b =b+1;
      		}
      	a = a+1;
   		}
   	a =1;
   	while (!(a>baris)){
      	k =1;
      	while (!(k>kolom)){
         	cout << "Matriks ["<<a<<"] ["<<k<<"] = ";
         	cin >> f[a][k];
         	k =k+1;
      		}
      	a =a+1;
   		}
   	cout << " " << endl;   
   	cout << "Array Dua Dimensi" << endl;   
   	cout << "Matriks A                      Matriks B" << endl;   
   	a =1;
   	while (!(a>baris)){
      	b =1;
      	while (!(b>kolom)){
         	cout << data[a][b]<<" ";         
			b =b+1;
      	}
      	k =1;
      	cout << "                            ";      
	  	while (!(k>kolom)){
         	cout << f[a][k]<<"  ";         
		 	k =k+1;
      		}
      	cout << " " << endl;      
	  	a =a+1;
   		}
   	a =1;
   	while (!(a>baris)){
      	b =1;
      	while (!(b>kolom)){
         	array[d] = data[a][b];
         	b =b+1;
         	d =d+1;
      		}
      	k =1;
      	while (!(k>kolom)){
         	array[d] = f[a][k];
         	k =k+1;
         	d =d+1;
      		}
      	a =a+1;
   		}
   	cout << "Array dua dimensi ke satu dimensi : " << endl;   
	a =1;
   	while (!(a>(baris*kolom)*2)){
      	cout << array[a]<<" ";      
	  	a =a+1;
   		}
   	cout << " " << endl;   
	cout << "Data setelah di urutkan :" << endl;   
	a =1;
   	while (!(a>(baris*kolom)*2)){
      	b =1;
      	while (!(b>((baris*kolom)*2)-1)){
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
   	while (!(a>(baris*kolom)*2)){
    	cout << array[a]<<" ";    
		a =a+1;
   		}
   	return 0;
	}
