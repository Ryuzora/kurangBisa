#include <iostream>
#include <cmath>
using namespace std;

int jenis_segitiga(int sideA,int sideB,int sideC);

int main(){
    int sideA,sideB,sideC;
    cin >> sideC >> sideB >> sideA;
    int hasil=jenis_segitiga(sideA,sideB,sideC);
    //cout << sideA << sideB << sideC;
    if (hasil==0){
        cout << "segitiga siku-siku";
    } else if(hasil==1){
        cout<<"segitiga lancip";
    } else if(hasil==2) {
        cout<<"segitiga tumpul";
    } else {
        cout << "segitiga sama sisi";
    }
    return 0;
}

int jenis_segitiga(int sideA,int sideB,int sideC){
    if(sideC == sideB && sideB == sideA){
        return 9;
    }
    sideA = pow(sideA,2);
    sideB = pow(sideB,2);
    sideC = pow(sideC,2);
    if ( sideC == sideB+sideA || sideB == sideC+sideA ||sideA == sideC+sideB){
        return 0;
    } else if (sideC > sideB+sideA || sideB > sideC+sideA ||sideA > sideC+sideB){
        return 2;
    } else if (sideC < sideB+sideA || sideB < sideC+sideA ||sideA < sideC+sideB){
        return 1;
    }
}
