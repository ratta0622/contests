#include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;
  int ans = INT_MAX;
  bool flag = false;
  for(int i=0; i<N; ++i){
    int A, P, X;
    cin >> A >> P >> X;
    if(X > A){
      ans = min(ans, P);
      flag = true;
    }
  }

  if(flag){
    cout << ans << endl;
  }else{
    cout << -1 << endl;
  }
  
  

  return 0;
}
