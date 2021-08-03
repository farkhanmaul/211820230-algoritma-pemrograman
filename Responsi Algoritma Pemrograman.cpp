#include <iostream>
using namespace std;

int main(){
 	int n, total=0;
 	int data[20], gaji[20], jamkerja[20];
 	cout << "====================================" << endl;			// Nama : Muhammad Farkhan Maulana
	cout << "       RESPONSI ALPRO KODE : B      " << endl;			// NIM	: 2000018280
	cout << "  PROGRAM MENGHITUNG GAJI KARYAWAN  " << endl;			// Kelas: E
 	cout << "====================================" << endl;			// Slot	: Rabu, 13.30
	cout << "\nMasukkan banyak karyawan : ";
	cin >> n;
	for(int p=1; p<=n;p++){
	    cout << "Masukkan jumlah jam kerja Karyawan ke-"<< p <<" : ";
	    cin >> jamkerja[p];
	      	if (jamkerja[p] > 7) {
	      		gaji[p] = (7 * 10000) + ((jamkerja[p] - 7)*15000);
  				}
			else{
				gaji[p] = jamkerja[p] * 10000; 
				}
	   	}	
 	cout << "\n--------------------------------"<<endl;
 	for(int p=1; p<=n;p++){
	    cout << "Karyawan ke-"<< p <<" mendapat gaji : "<< gaji[p]<<endl;
		total = total+gaji[p];
	   	}
	cout << "\nJumlah total gaji "<<n<<" orang karyawan : "<<total<<endl;
 	return 0;
	}
