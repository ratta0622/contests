#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;
  double dp[N]; //N-i nodes have been conjunction
  dp[0] = 0;

  for(int i=0; i<N-1; ++i){
    /* double P = (double)(i+1)/(double)N; */
    /* cout << "debug:"; */
    /* cout << P << endl; */
    dp[i+1] = dp[i] + ((double)N/(double)(i+1));
  }

  /* for(int i=0; i<N; ++i){ */
  /*   cout << dp[i] << endl; */
  /* } */

  cout << dp[N-1] << endl;

  return 0;
}
