#include <iostream>

using namespace std;

int main(){
    int arr[15] = {1,1,2,3,5,8,13,21,34,55,89,144,233,377,610};
    int pos1 = 0, pos2 = sizeof(arr)/sizeof(arr[0]), num , mid= (pos1+pos2)/2;
    bool f=false;
    cout << "cari nomor: ";
    cin >> num;
        while(!f && pos1<=pos2){
            if(arr[mid]==num){
                f=true;
            } else if(arr[mid]>num){
                pos2 = mid-1;
                mid = (pos1+pos2)/2;
            } else {
                pos1= mid+1;
                mid = (pos1+pos2)/2;
            }
        }
        if(!f){
            cout<<"nomor tidak ditemukan";
        } else {
            cout << "nomor ada di posisi: "<<mid;
        }
    return 0;
}
