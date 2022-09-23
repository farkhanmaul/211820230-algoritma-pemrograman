#include <iostream>
using namespace std;

int main(){
    int a, n, total = 0;
    cout << "Masukkan batas n ";cin >> n;

    for(int i=1;i<=n;i++){
        a=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                a++;
            }
        }
        if (a==2){
            cout << i << " ";
            total += i;
        }
    }
    cout << "\b" << endl;
    cout << "Total = " << total;
}
