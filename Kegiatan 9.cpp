#include<iostream>
using namespace std;

main(){
	int i,j,baris,kolom,l=0,k=0,hasil=0;
	
	cout<<"Masukan Banyaknya Baris : ";			
	cin>>baris;										
	cout<<"Masukan Banyakanya Kolom : ";
	cin>>kolom;
	int data[baris][kolom];
	int data2[baris][kolom];
	int array[100];
	cout<<endl;
	for (i=0; i<baris; i++){
		for (j=0; j<kolom; j++){
			cout<<"Matriks ["<<i+1<<"]["<<j+1<<"] = ";
			cin>>data[i][j];
		}
	}
	cout<<endl;
	cout<<"Array 2 Dimensi : "<<endl;
	for (i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cout<<data[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (i=0; i<baris; i++){
		for (j=0; j<kolom; j++){
			array[k]=data[i][j]; 
			k++;
		}
	}
	cout<<"Data Array Setelah Di Sorting : "<<endl;
	for (i=0; i<(baris*kolom); i++){
		for (j=0; j<(baris*kolom)-1; j++){
			if (array[j]>array[j+1]){
				hasil=array[j];
				array[j]=array[j+1];
				array[j+1]= hasil; 
			} 
		}
	}
	for (i=0; i<baris; i++){
		for (j=0; j<kolom; j++){
			data2[i][j]=array[l];
			l++;
		}
	}
	for (i=0; i<baris; i++){
		for (j=0; j<kolom; j++){
			cout<<data2[i][j]<<" ";
		}
		cout<<endl;
	}
}
