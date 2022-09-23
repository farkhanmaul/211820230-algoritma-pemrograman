#include <iostream>
using namespace std;

int luasprisma(int t, int a1, int a2, int a3, int as, int ts){
	int luasprisma = t*(a1+a2+a3) + (as*ts)/2;
	return luasprisma;
	}
 
int main(){
    int t, a1, a2, a3, as, ts;
    cout<<"Perhitungan Luas Permukaan Prisma Tegak Segitiga"<< endl;
    cout<<" Tinggi Prisma Tegak \t\t= "; cin>>t;
    cout<<" Sisi 1 Segitiga Alas Prisma \t= "; cin>>a1;
    cout<<" Sisi 2 Segitiga Alas Prisma \t= "; cin>>a2;
    cout<<" Sisi 3 Segitiga Alas Prisma \t= "; cin>>a3;
	cout<<" Alas Segitiga Alas Prisma \t= "; cin>>as;
    cout<<" Tinggi Segitiga Alas Prisma \t= "; cin>>ts;
	cout<<"\n Luas permukaan Prisma Tegak Segitiga = "<<luasprisma(t, a1, a2, a3, as, ts);
    return 0;
	}
