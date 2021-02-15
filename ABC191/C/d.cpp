#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  char S[H][W];
  vector<vector<pair<int,int>>> block(H);
  for(int i=0; i<H; ++i){
    for(int j=0; j<W; ++j){
      cin >> S[i][j];
    }
  }
  
  int ans = 0;

  for(int i=1; i<H; ++i){
    bool flag = true;
    for(int j=0; j<W; ++j){
      if(flag){
        if(S[i-1][j]!=S[i][j]){
          ++ans;
          flag = false;
        }
      }else{
        if(S[i-1][j]==S[i][j]){
          ++ans;
          flag = true;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
