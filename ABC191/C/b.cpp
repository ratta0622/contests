#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> surround = {{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0}};

int main(){
  int H, W;
  cin >> H >> W;
  char S[H][W];
  for(int i=0; i<H; ++i){
    for(int j=0; j<W; ++j){
      cin >> S[i][j];
    }
  }
  
  for(int i=1; i<H-1; ++i){
    for(int j=1; j<W-1; ++j){
      if(S[i][j]=='.') continue;
      int check=0;
      int cnt = 0;
      for(pair<int,int> sur : surround){
        if(S[i+sur.first][j+sur.second]=='#'){
           check += pow(2,0);
        }
        ++cnt;
      }
      
    }
  }


  return 0;
}
