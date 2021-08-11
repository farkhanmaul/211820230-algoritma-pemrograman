#include <iostream>
using namespace std;

int main(){
   float x, y;
   int i = 0;
   float pangkat = 1;

   cout << "Masukkan x : ";cin >> x ;
   cout << endl;
   cout << "Masukkan y : ";cin >> y;
   cout << endl;

   	if (y>0){
      while (i<y){
      	i = i + 1;
        pangkat = pangkat * x;
      	}
	}
   	else{
      while (i>y){
        i = i-1;
		pangkat = pangkat* 1 / x;
      	}
	}
    cout << "Hasil x pangkat y : "<< pangkat << endl;
   return 0;
}
