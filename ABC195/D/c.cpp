#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N, M, Q;
  cin >> N >> M >> Q;
  int X[M];
  vector<pair<int,int>> nimotsu(N); //(value,weight)
  for(int i=0; i<N; ++i){
    cin >> nimotsu[i].second >> nimotsu[i].first;
  }
  sort(nimotsu.begin(), nimotsu.end(),[](pair<int,int>a, pair<int,int>b){if(a.first==b.first) return a.second>b.second; return a.first>b.first;} );
  for(int i=0; i<M; ++i){
    cin >> X[i];
  }

  int ans[Q] = {};

  for(int q=0; q<Q; ++q){
    int L, R;
    cin >> L >> R;
    --L; --R;
    bool flagM[M];
    for(int i=0; i<M; ++i){
      flagM[i] = false;
    }
    for(int i=L; i<=R; ++i){
      flagM[i] = true;
    }

    for(pair<int,int> vw : nimotsu){
      int minimum = INT_MAX;
      int idx=-1;
      for(int i=0; i<M; ++i){
        if(flagM[i]) continue;

        if(X[i]>=vw.second && minimum>X[i]){
          minimum = X[i];
          idx = i;
        }
      }
      if(idx!=-1){
        flagM[idx] = true;
        ans[q] += vw.first;
      }
    }
  }

  for(int i=0; i<Q; ++i){
    cout << ans[i] << endl;
  }

  return 0;
}
