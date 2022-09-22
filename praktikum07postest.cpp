#include <iostream>
using namespace std;

int main(){
	int p, q, temp, n, r;
	int data[50];
	cout << "Masukkan banyak data : ";
	cin >> n;
	p =1;
	while (!(p>n)){
	    cout << "Masukkan data ["<< p <<"] : ";
	    cin >> data[p];   
		p =p+1;
	   	}
	p =1;
	cout << "Data sebelum di urutkan: " << endl;   
	while (!(p>n)){
	    cout << data[p]<<" ";      
		p =p+1;
	   	}
	p =1;
	while (!(p>n)){
	    q =p+1;
	    while (!(q>n)){
	        if (data[p]>data[q]){
	        	temp =data[p];
	            data[p] = data[q];
	            data[q] = temp;
	        }
	        else{}
	        q =q+1;
	      	}
	    r =1;
	    cout << endl;
	    while (!(r>n)){
	        cout << data[r]<<" ";         
			r =r+1;
	      	}
	    cout << "Proses ke :"<< p;      
		p =p+1;
	   	}
	p =1;
	cout << "\nData setelah di urutkan: " << endl;   
	while (!(p>n)){
	    cout << data[p]<<" ";      
		p =p+1;
	   	}
	return 0;
	}
