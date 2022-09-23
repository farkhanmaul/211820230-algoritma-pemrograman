#include<iostream>
using namespace std;

int main(){
	int a,b;
	int matriks[4][4]={{3,6,7,8},{7,3,2,1},{1,2,3,6},{3,5,9,8}};
	cout<<"Matriks 4x4 :"<<endl;
		for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			cout<<" "<<matriks[i][j];
		}
		cout << endl;
	}
	cout<<endl;
	cout<<"Matriks identitas 4x4 :"<<endl;
	for(a=1;a<=4;a++){
		for(b=1;b<=4;b++){
			if(a==b){
				cout<<" "<<"1";
			}
			else{
				cout<<" "<<"0";
				}
		}
		cout<<endl;
	}
}
