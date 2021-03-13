#include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;
  int A[N], B[N];
  for(int i=0; i<N; ++i){
    cin >> A[i] >> B[i];
  }

  int ans = INT_MAX;
  for(int i=0; i<N; ++i){
    for(int j=0; j<N; ++j){
      if(i==j){
        ans = min(ans, A[i]+B[j]);
      }else{
        ans = min(ans, max(A[i], B[j]));
      }
    }
  }
  
  cout << ans << endl;

  return 0;
}
