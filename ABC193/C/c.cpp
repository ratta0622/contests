#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N;
  cin >> N;
  set<ll> already;
  ll ans = 0;
  ll square = sqrt(N);
  for(ll i=2; i<=square; ++i){
    for(ll j=2; ; ++j){
      ll bekijou=pow(i,j);
      if(bekijou>N) break;
      if(already.find(bekijou)!=already.end()) continue;
      already.insert(bekijou);
      ++ans;
    }
  }
  ans = N-ans;
  cout << ans << endl;
  return 0;
}
