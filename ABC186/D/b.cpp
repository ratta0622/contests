#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;
  ll A[N];
  for(int i=0; i<N; ++i){
    cin >> A[i];
  }
  sort(A, A+N);

  ll ans = 0;
  for(int i=0; i<N; ++i){
    ans += i*A[i];
    ans -= (N-1-i)*A[i];
  }

  cout << ans << endl;
  
  return 0;
}
