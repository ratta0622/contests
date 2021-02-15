#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N;
  cin >> N;
  N *= 2;
  ll ans = 0;
  for(ll i=1; i<=sqrt(N); ++i){
    if(N%i==0 && i%2!=(N/i)%2) ans += 2;
  }
  
  cout << ans << endl;

  return 0;
}
