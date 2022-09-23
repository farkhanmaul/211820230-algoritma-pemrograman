#include <iostream>
using namespace std;

int main(){
 	int hasil, j, k, i, l, baris, kolom;
  	cout<<"Jumlah Baris : ";cin >> baris;
  	cout<<"Jumlah Kolom : ";cin >> kolom;
   	int data[baris][kolom];
   	int data2[baris][kolom];
   	int array[100];
   	i =1;
   	l =1;
   	hasil =0;
   	j =1;
   	k =1;
	data[baris][kolom] = baris*kolom;
   	data2[baris][kolom] = baris*kolom;
   	array[100] = k;
   	while (!(i>baris)) {
      	j =1;
      	while (!(j>kolom)) {
         	cout<<"Array "; 
         	cout << "["<<i<<"] ["<<j<<"] = ";
         	cin >> data[i][j];
         	j =j+1;
      		}
      	i =i+1;
   		}
   	cout << " " << endl;   
   	cout << "Array sebelum disorting =  " << endl;   
   	i =1;
   	while (!(i>baris)){
      	j =1;
      	while (!(j>kolom)) {
         	cout << data[i][j]<<" ";         
		 	j =j+1;
      	}
      	cout << " " << endl;      
	  	i =i+1;
   		}
   	i =1;
   	while (!(i>baris)) {
      	j =1;
      	while (!(j>kolom)){
         	array[k] = data[i][j];
         	j =j+1;
         	k =k+1;
      	}
      	i =i+1;
   	}
   	i =1;
   	while (!(i>baris*kolom)) {
      	j =1;
      	while (!(j>(baris*kolom)-1)) {
         	if (array[j]>array[j+1]){
            	hasil =array[j];
            	array[j] = array[j+1];
            	array[j+1] = hasil;
         		}
         	else{
         		}
         	j =j+1;
      		}
      	i =i+1;
   		}
   	cout << " " << endl;   
   	i =1;
   	cout << "Array setelah disorting =  " << endl;   
   	while (!(i>baris)){
      	j =1;
     	while (!(j>kolom)){
        	data2[i][j]= array[l];
         	j =j+1;
         	l =l+1;
      	}
      	i =i+1;
   		}
   	i =1;
   	while (!(i>baris)){
      	j =1;
      	while (!(j>kolom)){
         	cout << data2[i][j]<<" ";         
		 	j =j+1;
      		}
      	cout << " " << endl;      
	  	i =i+1;
   		}
	return 0;
	}
