#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int H, W, A, B;
int ans = 0;

void DFS(int i, int bit, int a, int b){
  if(i == H*W){
    ++ ans;
    return;
  }
  if(bit & 1<<i){
    DFS(i+1, bit , a, b);
    return;
  }
}

int main(){
  cin >> H >> W >> A >> B;

  

  return 0;
}
