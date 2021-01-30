#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<int>> edge(N);
  for(int i=0; i<M; ++i){
    int A, B;
    cin >> A >> B;
    --A; --B;
    edge[A].push_back(B);
    edge[B].push_back(A);
  }
  int K;
  cin >> K;
  int C[K];
  for(int i=0; i<K; ++i){
    cin >> C[i];
    --C[i];
  }

  int distance[K][K] = {}; //distance[i][j] is the shortest distance from Ci to Cj
  for(int i=0; i<K; ++i){
    vector<int> dist(N, -1);
    queue<int> BFS;
    BFS.push(C[i]);
    dist[C[i]] = 0;
    while(!BFS.empty()){
      int prev = BFS.front();
      BFS.pop();
      for(int next : edge[prev]){
        if(dist[next]!=-1) continue;
        BFS.push(next);
        dist[next] = dist[prev]+1;
      }
    }
    for(int j=0; j<K; ++j){
      if(dist[C[j]] == -1){
        cout << -1 << endl;
        return 0;
      }
      distance[C[i]][C[j]] = dist[C[j]];
    }
  }
  
  /* for(int i=0; i<K; ++i){ */
  /*   for(int j=0; j<K; ++j){ */
  /*     distance[C[i]][C[j]] = distance[C[i]][C[j]]; */
  /*   } */
  /* } */
 

  int bit_max = 1<<K;
  int dp[bit_max][K] = {}; //dp[S][i]: S is subset of C={C1, ..., CK}, and i means that Ci is end of path
  for(int i=0; i<K; ++i){
    dp[1<<i][i] = 1;
  }
  for(int bit=0; bit<(1<<K); ++bit){
    for(int i=0; i<K; ++i){
      if(!(bit & (1<<i)) || !(bit ^ (1<<i))) continue; //Ci is not included in S || S has only single element
      dp[bit][i] = INT_MAX;
      int prebit = bit & ~(1<<i);
      for(int j=0; j<K; ++j){
        if(!(prebit & (1<<j))) continue; //Cj is not included in S-{Ci} 
        dp[bit][i] = min(dp[bit][i], dp[prebit][j] + distance[C[i]][C[j]]);
      }
    }
  }

  int ans = INT_MAX;
  for(int i=0; i<K; ++i){
    ans = min(ans, dp[(1<<K)-1][i]);
  }
  cout << ans << endl;

  /* for(int i=0; i<1<<K; ++i){ */
  /*   for(int j=0; j<K; ++j){ */
  /*     cout << dp[i][j] << '\t'; */
  /*   } */
  /*   cout << endl; */
  /* } */



  /* for(int i=0; i<K; ++i){ */
  /*   for(int j=0; j<K; ++j){ */
  /*     cout << distance[C[i]][C[j]] << '\t'; */
  /*   } */
  /*   cout << endl; */
  /* } */


  return 0;
}
