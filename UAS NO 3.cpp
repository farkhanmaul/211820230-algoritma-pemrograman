#include <iostream>			// Nama : Muhammad Farkhan Maulana
using namespace std;		// NIM	: 2000018280
							// Kelas: E
int main(){
	struct{
		int prak,teori,uk1,uk2,hasil;
		}
	data[10];
	int i,j;
	cout<<"\t=================="<<endl;
	cout<<"\tDAFTAR NILAI ALPRO"<<endl;	
	cout<<"\t=================="<<endl<<endl;
	cout<<" Masukkan jumlah mahasiswa : ";cin>>j;
	cout<<endl;
	for(i=1;i<=j;i++){
		cout<<"Mahasiswa ke-"<<i<<endl;
		cout<<"Nilai Praktikum\t: ";cin>>data[i].prak;
		cout<<"Nilai Teori \t: ";cin>>data[i].teori;
		cout<<"Nilai UK 1 \t: ";cin>>data[i].uk1;
		cout<<"Nilai UK 2 \t: ";cin>>data[i].uk2;
		cout<<endl;
		data[i].hasil=(data[i].prak*0.1)+(data[i].teori*0.6)+(data[i].uk1*0.15)+(data[i].uk2*0.15);
		}
	cout<<"\t DAFTAR NILAI MAHASISWA "<<endl;
	cout<<"====================================="<<endl;
	cout<<"     Nilai Nilai Nilai Nilai Nilai"<<endl;
	cout<<"NIM  Prak  Teori UK-1  UK-2  Akhir "<<endl;
	cout<<"     10%   60%   15%   15%         "<<endl;
	cout<<"====================================="<<endl;
	for(i=1;i<=j;i++){
		printf("%d %5d %5d %5d %5d %6d\n",i,data[i].prak,data[i].teori,data[i].uk1,data[i].uk2,data[i].hasil);
		}
	cout<<"====================================="<<endl;
	}
