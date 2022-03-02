#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//variabel global
int angka, entah, ulang();
string hb;
char ulangi;

int main() {
    system("clear");
    cout << "masukan angka : " << endl;
    cin >> angka;
    entah = angka % 2;
    if (angka != 0) {
        if (entah == 0){
            system("clear");
            hb = "genap";
            cout << "angka anda adalah bilangan " << hb << endl;
        } else if(entah == 1){
            system("clear");
            hb = "ganjil";
            cout << "angka anda adalah bilangan " << hb << endl;
        }
    } else {
        system("clear");
        cout << "angka yang anda masukan adalah 0" << endl;
}
    ulang();
}

int ulang(){
    cout << "\nulangi program?(y/n)" << endl;
    cin >> ulangi;
    if (ulangi == 'y' || ulangi == 'Y'){
        main();
    } else if (ulangi == 'n' || ulangi == 'N'){
    return 0;
} else {
        system("clear");
        cout << "\nchar yang anda masukan invalid" << endl;
        ulang();
    }
}
