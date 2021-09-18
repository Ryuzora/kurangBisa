#include<iostream>  
  
using namespace std; 
int i,g, sq,pX,pY;
int x1,x2,y1,y2;

int main(){
  cout << "masukan jumlah kandang per baris" << endl;
  cin >> sq;
  cout << "total keseluruhan kandang: " << sq*sq << endl;
  int x,y=sq;
  int pk[x][y];
  int tk[x][y];
  for(y1=0;y1<sq;y1++){
    for(x1=0;x1<sq;x1++){
      cout << "pakan kandang " << x1+1 << "," << y1+1 << " dari pak Slamet adalah: "<< endl;
      cin >> pk[x1][y1];
    }
  }
  for(y2=0;y2<sq;y2++){
    for(x2=0;x2<sq;x2++){
      cout << "pakan kandang " << x2+1 << "," << y2+1 << " dari tetangga adalah: "<< endl;
      cin >> tk[x2][y2];
    }
  }
  cout << "total pakan" << endl;
  for(pY=0;pY<sq;pY++){
    for(pX=0;pX<sq;pX++){
      cout << pk[pY][pX] + tk[pY][pX] << " ";
    }
    cout << endl;
  }
  return 0;
}
