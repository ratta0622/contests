#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;
  double ans = 0;

  for(int i=1; i<=N-1; ++i){
    ans += N/(double)i;
  }

  cout << ans << endl;

  return 0;
}
