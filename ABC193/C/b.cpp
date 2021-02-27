#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N;
  cin >> N;
  
  set<ll> expo;
  ll ans = 0;
  for(ll i=2; i<=sqrt(N); ++i){
    for(ll j=2; ; ++j){
      ll power=pow(i,j);
      if(power>N) break;
      if(expo.find(power)!=expo.end()) continue;
      expo.insert(power);
      ++ans;
    }
  }
  
  cout << N - ans << endl;

  return 0;
}
