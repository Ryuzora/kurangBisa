#include <iostream>
using namespace std;

//var
int int1,int2,op;

int main(){
cout << "masukan angka pertama" << endl;
cin >> int1;
cout << "masukan angka kedua" << endl;
cin >> int2;
cout << "masukan operasi:\n1.+(penjumlahan)\n2.-(pengurangan)\n3.*(perkalian)\n4./(pembagian)" << endl;
cin >> op;
    
switch (op){
    case 1:
        cout << int1 + int2 << endl;
        break;
    case 2:
        cout << int1 - int2 << endl;
        break;
    case 3:
        cout << int1 * int2 << endl;
        break;
    case 4:
        cout << int1 / int2 << endl;
        break;
}
}
