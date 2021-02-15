#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int sumA=0, sumB=0;
  for(int i=0; i<3; ++i){
    sumA += A%10;
    sumB += B%10;
    A/=10; B/=10;
  }
  
  cout << max(sumA,sumB) << endl;


  return 0;
}
