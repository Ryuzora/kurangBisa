#include <iostream>
using namespace std;

int a1[8] = {2,3,6,5,7,1,8,4};
int aLeft[4];
int aRight[4];
int n1,n2,from,mid,k,i,j,to,v1,v2,m,r,a;
void merge(int a1[], int from, int mid, int to){
    v1=from;
    m = mid;
    v2 = to;
    n1 = m-v1+1;
    n2 = v2-v1;
    for(i=0;i<=mid;i++){
        aLeft[i] = a1[i];
        //cout << i << " ";
    }
    for(j=0; j+m<to; j++){
        aRight[j] = a1[j+m+1];
        //cout << j<< endl;
    }
    //cout << aLeft[0] << " " << aRight[3];
    //cout <<j+m+1;
    i=0;
    j=0;
    for(k=0;k<=to;k++){
   // cout << aLeft[i] << aRight[j] << j << k << " ";
        if(aLeft[i]<=aRight[j]){
            a1[k]=aLeft[i];
            i++;
            //cout << j;
        } else {
            a1[k]=aRight[j];
            j++;
        }
    }    
    //cout << aLeft[3];
}
int main(){
    merge(a1,0,3,7);
    for(r=0;r<=v2;r++){
        //cout << v2;
        cout << a1[r] << " ";
    }
    return 0;
}
