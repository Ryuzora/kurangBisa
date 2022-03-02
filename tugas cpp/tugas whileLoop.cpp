#include <iostream>
using namespace std;

int j,k=1,l=1;
cout << masukan angka: << endl;
char o='\\';
int main(){
    cin >> j;
    while(k<j+1){
        while(l < k+1){
            cout << o;
            l++;
        }
        k++;
        l=1;
        cout << endl;
    }
}
