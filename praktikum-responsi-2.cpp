#include <iostream>
using namespace std;
  
int main() {
    int i,j;
    for (i=1;i<=10;i++) {
        for (j=i;j<=10;j++) {
			cout << " "<<"*";
        }
		for (j=2;j<=i;j++) {
            cout << "  "; 
        }
        cout << endl;
    }
    return 0;
}
