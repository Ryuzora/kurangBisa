#include <iostream>
using namespace std;

int j,k,l;
cout << masukan angka: << endl;
char o='\\';
int main(){
    cin >> j;
    for(k = 1; k<j+1; k++){
        cout << endl;
        for(l = 1; l < k+1; l++){
        cout << o;
        }
    }
}
