#include <iostream>
using namespace std;

int num[15] = {1,1,2,3,5,8,13,21};

int main(){
    for(int i = 0;i<15;i++){
        num[i+2]=num[i]+num[i+1];
        cout << num[i] << " ";
    }
    return 0;
}
