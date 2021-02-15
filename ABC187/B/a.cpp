#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int x[N], y[N];
  for(int i=0; i<N; ++i){
    cin >> x[i] >> y[i];
  }
  
  int ans = 0;
  for(int i=0; i<N-1; ++i){
    for(int j=i+1; j<N; ++j){
      double diffx, diffy;
      diffx = x[j]-x[i];
      diffy = y[j]-y[i];
      if(diffy/diffx >=-1 && diffy/diffx <=1) ++ans;
    }
  }
  
  cout << ans << endl;

  return 0;
}
