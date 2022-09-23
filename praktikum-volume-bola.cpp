#include <iostream>
using namespace std;

float volumebola(float phi, float r){
	float volume = phi * r * r * r * 4/3;
	return volume;
}

int main(){
	float r, phi=3.14;
	cout << "Program Volume Bola" << endl;
	cout << "Masukkan Jari-jari Bola(cm) : ";
	cin >> r ;
	cout << "Volume Bola = " << volumebola(phi, r) << endl;
	return 0;
	}
