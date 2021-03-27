#include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0; i<N; ++i){
    cin >> A[i];
  }

  if(N==1){
    cout << A[0] << endl;
    return 0;
  }

  int ans = INT_MAX;
  for(int mask=0; mask<pow(2,N-1); ++mask){

    int OR = A[0];
    vector<int> OR_seq;

    for(int i=0; i<N-1; ++i){
      if(mask & (1<<i)){
        OR = OR|A[i+1];
      }else{
        OR_seq.push_back(OR);
        OR = A[i+1];
      }
    }
    OR_seq.push_back(OR);

    int XOR = 0;
    for(int x : OR_seq){
      XOR = XOR ^ x;
    }
    



    ans = min(ans, XOR);
  }
  
  cout << ans << endl;

  /* for(int mask=0; mask<pow(2,N-1); ++mask){ */
  /*   bool prev_bit; */
  /*   int OR = A[0]; */
  /*   vector<int> OR_seq; */
  /*   prev_bit = mask & 1; */

  /*   for(int i=1; i<N; ++i){ */
  /*     bool bit = mask & (1<<i); */
  /*     if(bit == prev_bit){ */
  /*       OR = OR | A[i]; */
  /*     }else{ */
  /*       OR_seq.push_back(OR); */
  /*       OR = A[i]; */
  /*       prev_bit = bit; */
  /*     } */
  /*   } */

  /*   int XOR = 0; */
  /*   for(int x : OR_seq){ */
  /*     XOR = XOR ^ x; */
  /*   } */

  /*   cout << XOR << endl; */ 

  /*   ans = min(ans, XOR); */
    
  /* } */
  
  /* cout << ans << endl; */

  return 0;
}
