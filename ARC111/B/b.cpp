#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int>> edge(400000);
  
  for(int i=0; i<N; ++i){
    int a,b;
    cin >> a >> b;
    --a; --b;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }

  int ans = 0;
  vector<bool> flag(400000, false);
  for(int i=0; i<N; ++i){
    bool is_tree = true;
    if(flag[i]) continue;
    queue<pair<int,int>> BFS;
    BFS.push({i,-1});
    while(!BFS.empty()){
      pair<int,int> prev = BFS.front();
      BFS.pop();
      flag[prev.first] = true;
      for(int next : edge[prev.first]){
        if(next == prev.second) continue;
        if(flag[next]){
          is_tree = false;
          continue;
        }
        BFS.push({next,prev.first});
      }
    }
  }
  


  return 0;
}
