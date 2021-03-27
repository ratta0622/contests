#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string N;
  cin >> N;
  int length = N.size();
  ll ans = 0;
  int i;
  for(i=1; 2*i<length; ++i){
    ans += 9*pow(10,i-1);
  }

  if(2*i == length+1){
    cout << ans << endl;
    return 0;
  }

  int n = stoi(N.substr(0, i));
  int n_2 = stoi(N.substr(i,i));

  if(n > pow(10,i-1))
  {
    ans += n - pow(10,i-1);
  }
  if(n_2>=n) ++ans;


  cout << ans << endl;

  return 0;
}
