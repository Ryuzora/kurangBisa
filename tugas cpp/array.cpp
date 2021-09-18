#include<iostream>  
  
using namespace std; 
int i,g, sq,hasil;

int main(){
  cout << "masukan jumlah kandang per baris" << endl;
  cin >> sq;
  sq = sq*sq;
  cout << "total keseluruhan kandang: " << sq << endl;
  int pk[sq*2];
  for(i=1;i<sq+1;i++){
    cout << "jumlah pakan kandang ke-"<<i<<" dari pak slamet" << endl;
    cin >> pk[i];
  }
  for(g=1;g<sq+1;g++){
    cout << "jumlah pakan kandang ke-"<<g<<" dari tetangga" << endl;
    cin >> pk[g+sq];
  }
  for(hasil=1;hasil<sq+1;hasil++){
    cout << "total pakan di kandang "<<hasil<<" adalah: "<<pk[hasil] + pk[hasil+sq]<< " pakan" << endl;
  }
  return 0;
} 
