#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
  if(b==0) return a;
  else return gcd(b, a%b);
}

ll extgcd(ll a, ll b, ll &x, ll &y){
  if(b == 0){
    x = 1;
    y = 0;
    return a;
  }
  ll d = extgcd(b, a%b, y, x);
  y -= a/b * x;
  return d;
}

int main(){
  int T;
  cin >> T;

  ll N, S, K, ans[T];

  for(int test=0; test<T; ++test){
    
    cin >> N >> S >> K;

    ll g = gcd(N,K);
    if(S%g != 0){
      ans[test] = -1;
      continue;
    }

    N/=g; S/=g; K/=g;

    /* Kx = 1(mod N) */
    ll x,y;
    extgcd(K, N, x, y);
    if(x<0) x+=N;

    ans[test] = (x*(N-S))%N;
  }

  for(int i=0; i<T; ++i){
    cout << ans[i] << endl;
  }
  
  return 0;
}
