#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    float b;
    char c, ulang;
    
    cout << "int : " << endl;
    cin >> a;
    cout << "float : " << endl;
    cin >> b;
    cout << "char  : " << endl;
    cin >> c;
    cout << "integer : " << a << "\nfloat : " << b << "\nchar : " << c << endl;
    
    cout << "lagi : (y/n)" << endl;
    cin >> ulang;
    if (ulang == 'y' || ulang == 'Y'){
        main();
    } else {
        cout << "tamat" << endl
    }
}