#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string strN;
  cin >> strN;
  ll N;
  N = stoll(strN);
  ll comma = (strN.size()-1)/3;
  if(comma==0){
    cout << 0 << endl;
    return 0;
  }

  ll ans = 0;
  ll ten = 10;

  for(int i=1; i<comma; ++i){
    ans += i*(pow(ten,3*(i+1))-1 - pow(ten,3*i) + 1);
    /* ans -= pow(ten,3*i); */
  }

  ans += comma*(N- pow(ten,3*comma)+1);
  
  cout << ans << endl;

  return 0;
}
