#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N;
  ll X;
  cin >> N >> X;
  X*=100;
  ll al = 0;
  for(ll i=1; i<=N; ++i){
    ll V, P;
    cin >> V >> P;
    al += V*P;
    if(al > X){
      cout << i << endl;
      return 0;
    }
  }


  cout << -1 << endl;

  return 0;
}
