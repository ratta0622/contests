#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  int A[N];
  for(int i=0; i<N; ++i){
    cin >> A[i];
    if(A[i]==X){
      A[i] = -1;
    }
  }
  
  for(int i=0; i<N; ++i){
    if(A[i]!=-1) cout << A[i] << " ";
  }

  cout << endl;

  return 0;
}
