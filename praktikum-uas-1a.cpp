#include<iostream>
using namespace std;

int main(){
	int a,b;
	int L[4][4]={	
	{1,2,3,4},
	{2,3,4,5},
	{3,4,5,6},
	{4,5,6,7}
	};
	cout<<"Matriks identitas 4 x 4 :"<<endl<<endl;
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
