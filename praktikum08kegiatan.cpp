#include<iostream>
using namespace std;

main(){
	int i,j,baris,kolom,l;
	int hasil, k=0;
	cout<<"Masukan Banyaknya Baris : ";
	cin>>baris;
	cout<<"Masukan Banyakanya Kolom : ";
	cin>>kolom;
	int A[baris][kolom];
	int data[baris][kolom]; 
	int e[100];
	for (i=0; i<baris; i++){
		for (j=0; j<kolom; j++){
			cout<<"Matriks ["<<i<<"]["<<j<<"] = ";
			cin>>A[i][j];
		}
	}
	for (i=0; i<baris; i++){
		for (l=0; l<kolom; l++){
			cout<<"Matriks ["<<i<<"]["<<l<<"] = ";
			cin>>data[i][l];
		}
	}
	cout<<endl;
	cout<<"Array 2 Dimensi : "<<endl;
	cout<<"Array A\t\tArray B"<<endl;
	for (i=0; i<baris; i++){
		for (j=0; j<kolom; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<"\t\t";
		for (int l=0; l<kolom; l++){
			cout<<data[i][l]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for (i=0; i<baris; i++){
		for (j=0; j<kolom; j++){
			e[k]=A[i][j]; 
			k++;
		}
		for (int l=0; l<kolom; l++){
			e[k]=data[i][l];
			k++;
		}
	}
	cout<<"Array 2 Dimensi ke 1 : "<<endl;
	for (i=0; i<(baris*kolom)*2; i++){
		cout<<e[i]<<" ";
	}
	cout<<endl;
	cout<<"Data Array Setelah Di Sorting : "<<endl;
	for (i=0; i<(baris*kolom)*2; i++){
		for (j=0; j<((baris*kolom)*2)-1; j++){
			if (e[j]>e[j+1]){
				hasil=e[j];
				e[j]=e[j+1];
				e[j+1]= hasil; 
			} 
		}
	}
	for (i=0;i<(baris*kolom)*2;i++){
	     	cout<<e[i]<<" ";
	}
	cout<<endl;

}
