#include <iostream>
using namespace std;

int main(){
	int tahun;

	cout<< "Masukkan Tahun : ";
	cin >> tahun;
	if (tahun % 400==0){
    	cout << "Adalah Tahun Kabisat" << endl;
		}
	else if (tahun % 100==0){
        cout << "Bukan Tahun Kabisat" << endl;
		}
	else if (tahun % 4==0){
        cout << "Adalah Tahun Kabisat" << endl;
		}
	else{
        cout << "Bukan Tahun Kabisat" << endl;
		}
	return 0;
	}
