#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string X;
  ll M;
  cin >> X >> M;
  vector<ll> num_X;
  ll digit = 0;
  for(char x:X){
    ll num = x-'0';
    digit = max(digit, num);
    num_X.push_back(num);
  }
  reverse(num_X.begin(), num_X.end());

  ll ans = 0;
  while(true){
    ++digit;
    ll X_in_digit = 0;
    ll keta = 0;
    for(ll num:num_X){
      X_in_digit += num*pow(digit, keta);
      ++keta;
    }
    if(X_in_digit<=M) ++ans;
    else break;
  }
  
  cout << ans << endl;

  return 0;
}
