#include <iostream>
using namespace std;

int main(){
   	int x, i, j, angka;
   	string str;
   
   	cout << "MASUKKAN NILAI x : ";
   	cin >> x;
   	int matriks[x][x];
   	i =1;
   	while (1){
      	j =1;
      	if (i>x) break;
      	while (!(j>x)){
        	cout << "MATRIKS ["<<i<<"] ["<<j<<"] : ";
        	cin >> matriks[i][j];
        	j =j+1;
      		}
      	i =i+1;
   		}	
   	angka =0;
   	cout << "MATRIKS BUJUR SANGKAR " << endl;   
   	i =1;
   	while (1){
      	j =1;
      	if (i>x) break;
      	while (!(j>x)){
         	cout << matriks[i][j]<<" ";         
		 	j =j+1;
      		}
      	cout << " " << endl;      
	  	i =i+1;
   		}
   	i =1;
   	while (1){
      	j =1;
      	if (i>x) break;
      	while (!(j>x)){
         	if (matriks[i][j] == 0 || matriks[i][j]==1){
            	if (i==j){
               		if (matriks[i][j]==1){
                  		angka =angka+1;
                  		str= "ADALAH MARIKS IDENTITAS";
               			}
               		else{
                  		if (matriks[i][j]==0){
                     		str= "BUKAN MATRIKS IDENTITAS";
                  			}
                  		else{}
               			}
            		}
            	else{}
         		}
        	else{
            	str= "BUKAN MATRIKS IDENTITAS";
         		}
         	j =j+1;
      		}
      	i =i+1;
   		}
   	if (angka==x){
      	cout << str;   
		}
   	else{
      	cout << "BUKAN MATRIKS IDENTITAS";   
	  	}
   return 0;
	}
