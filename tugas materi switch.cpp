#include <iostream>
#include <stdlib.h>
using namespace std;

//var
int int1,int2,ulang();

int main(){
char op;
cout << "masukan angka pertama" << endl;
cin >> int1;
cout << "masukan angka kedua" << endl;
cin >> int2;
cout << "masukan operasi:\n+ (penjumlahan)\n- (pengurangan)\n* (perkalian)\n/ (pembagian)" << endl;
cin >> op;
    
switch (op){
    case '+':
        cout << int1 + int2 << endl;
        break;
    case '-':
        cout << int1 - int2 << endl;
        break;
    case '*':
        cout << int1 * int2 << endl;
        break;
    case '/':
        cout << int1 / int2 << endl;
        break;
}
    ulang();
}
int ulang(){
    char ulangi;
    cout << "\nulangi program?(y/n)" << endl;
    cin >> ulangi;
    if (ulangi == 'y' || ulangi == 'Y'){
        system("clear");
        main();
    } else if (ulangi == 'n' || ulangi == 'N'){
    return 0;
} else {
        system("clear");
        cout << "\nchar yang anda masukan invalid" << endl;
        ulang();
    }
}
