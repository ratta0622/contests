#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;
  bool S[N]; 
  for(int i=0; i<N; ++i){
    string s;
    cin >> s;
    if(s=="AND") S[i] = true;
    else S[i] = false;
  }
  
  ll dp[2][N+1];
  dp[0][0] = 1;
  dp[1][0] = 1;
  for(int i=1; i<=N; ++i){
    if(S[i-1]){
      dp[0][i] = dp[0][i-1];
      dp[1][i] = dp[0][i-1] + 2*dp[1][i-1];
    }else{
      dp[0][i] = 2*dp[0][i-1] + dp[1][i-1];
      dp[1][i] = dp[1][i-1];
    }
  }

  cout << dp[0][N] << endl;

  return 0;
}
