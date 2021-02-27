#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
  int H, W, A[100][100]={};
  cin >> H >> W;
  int minimum = INT_MAX;
  for(int i=0; i<H; ++i){
    for(int j=0; j<W; ++j){
      cin >> A[i][j];
      minimum = min(A[i][j],minimum);
    }
  }

  int ans = 0;
  for(int i=0; i<H; ++i){
    for(int j=0; j<W; ++j){
      ans += A[i][j]-minimum;
    }
  }

  cout << ans << endl;
  
  return 0;
}
