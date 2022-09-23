#include <iostream>
using namespace std;

int main(){
	int k, j, temp;
	cout<<"Masukan banyak array : ";
	cin>>k;
	int data[k];
	for(int i=0; i<k; i++){
		cout<<"Masukan angka ke-"<<i<<" : ";
		cin>>data[i];
		}
	cout<<"\nSebelum sorting : \n";
	for(int i=0; i<k; i++){
		cout<<data[i]<<" ";
		}
	for(int i=1; i<k; i++){
		temp = data[i];
		j = i-1;
		while(j>=0 && data[j] > temp){
			data[j+1] = data[j];
			j--;
			}
		data[j+1] = temp;
		}
	cout<<"\nHasil Setelah Sorting : "<<endl;
	for(int m=0;m<k;m++){
		cout<<data[m]<<" ";
		}
}
