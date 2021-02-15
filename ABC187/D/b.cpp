#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;
  vector<pair<ll,ll>> greed(N);
  vector<ll> A(N), B(N);
  ll Takahashi = 0, Aoki = 0;
  for(int i=0; i<N; ++i){
    cin >> A[i] >> B[i];
    greed.push_back({B[i]+2*A[i], i});
    Aoki += A[i];
  }

  sort(greed.begin(), greed.end(), [](pair<ll,ll> a, pair<ll,ll> b){return a.first >= b.first;});
  
  int ans = 0;
  for(int i=0; i<N; ++i){
    ++ans;
    /* Takahashi += A[greed[i].second] + B[greed[i].second]; */
    /* Aoki -= A[greed[i].second]; */
    /* if(Takahashi > Aoki) break; */
    Aoki -= greed[i].first;
    if(Aoki<0) break;
  }

  cout << ans << endl;

  return 0;
}
