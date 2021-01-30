#include <bits/stdc++.h>
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
  set<int> stone;
  for(int i=0; i<K; ++i){
    cin >> C[i];
    --C[i];
    stone.insert(C[i]);
  }

  vector<int> number(N, 0);
  vector<bool> flag(N, false);
  queue<int> BFS;
  BFS.push(C[0]);
  int num = 0;
  while(!BFS.empty()){



    ++num;
    int prev = BFS.front();
    BFS.pop();
    stone.erase(prev);
    number[prev] = num;

    cout << endl;
    for(int i=0; i<N; ++i){
      cout << number[i] << endl;
    }
    cout << endl;

    /* check whether all stones are included */
    if(stone.empty()){
      cout << number[prev]+1 << endl;
      return 0;
    }

    for(auto i:edge[prev]){
      if(flag[i]) continue;
      BFS.push(i);
      flag[i] = true;
    }
  }

  cout << -1 << endl;

  return 0;
}
