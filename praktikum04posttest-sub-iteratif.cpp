#include <iostream>
#include <string>
using namespace std;

void iteratif (int a,int b){
	while (!(a==b)){
      	if (a % 5==0 && a % 7==0){
        cout << "hasilnya = "+a << endl;
			}
      	else{}
      	a =a+1;
   		}
	}
int main(){
   	iteratif(1,100);
   	return 0;
	}
