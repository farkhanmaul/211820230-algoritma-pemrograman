#include <iostream>
#include <string>

using namespace std;
void rekursif (int x,int y){
   	if (x<y){
      	if (x % 5==0 && x % 7==0){
         	cout << "Hasil ="+x << endl;      
			}
      	else{}
      	x =x+1;
      	rekursif(x,y);
   		}
   	else{}
	}
int main(){
	rekursif(1,100);
   	return 0;
	}
