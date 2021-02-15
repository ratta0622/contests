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
  for(int i=1; i<H-1; ++i){
    int flag = -1;
    for(int j=0; j<W; ++j){
      if(flag==-1){
        if(S[i][j] == '#') flag=j;
      }else{
        if(S[i][j] == '.'){
          block[i].push_back({flag,j-1});
          flag = -1;
        }
      }
    } 
  }
  /* for(int i=0; i<H; ++i){ */
  /*   for(auto blo : block[i]){ */
  /*     cout << "(" << blo.first << "," << blo.second << ")" << " "; */
  /*   } */
  /*   cout << endl; */
  /* } */

  for(int i=1; i<H; ++i){
    auto itr1=block[i-1].begin();
    auto itr2=block[i].begin();
    if(itr1 == block[i-1].end()){
      for(auto j : block[i]){
        ans+=2;
      }
      continue;
    }
    if(itr2 == block[i].end()){
      for(auto j : block[i-1]){
        ans+=2;
      }
      continue;
    }
    if(itr1->first)
  }

  cout << ans << endl;

  return 0;
}
