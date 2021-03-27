#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int H, W;
  pair<int,int> XY;
  cin >> H >> W >> XY.first >> XY.second;
  --XY.first;
  --XY.second;
  char S[H][W];
  for(int i=0; i<H; ++i){
    for(int j=0; j<W; ++j){
      cin >> S[i][j];
    }
  }

  int ans = 1;
  int X = XY.first;
  int Y = XY.second;
  while(true){
    ++X;
    if(X>=H) break;
    if(S[X][Y] == '#') break;
    ++ans;
  }
  X = XY.first;
  Y = XY.second;
  while(true){
    --X;
    if(X<0) break;
    if(S[X][Y] == '#') break;
    ++ans;
  }
  X = XY.first;
  Y = XY.second;
  while(true){
    ++Y;
    if(Y>=W) break;
    if(S[X][Y] == '#') break;
    ++ans;
  }
  X = XY.first;
  Y = XY.second;
  while(true){
    --Y;
    if(Y<0) break;
    if(S[X][Y] == '#') break;
    ++ans;
  }
  
  cout << ans << endl;

  return 0;
}
