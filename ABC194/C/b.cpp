#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;
  ll A[N];
  ll sum = 0;
  for(int i=0; i<N; ++i){
    cin >> A[i];
    sum += A[i];
  }
  
  ll sum_A[N];
  for(int i=0; i<N; ++i){
    sum -= A[i];
    sum_A[i] = sum;
  }

  ll ans = 0;

  for(int i=0; i<N; ++i){
    ans += (N-1) * pow(A[i],2);
    ans -= 2 * A[i] * sum_A[i];
  }

  cout << ans << endl;

  return 0;
}
