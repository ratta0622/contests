#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N, M, Q;
  cin >> N >> M >> Q;
  int W[N], V[N], X[M];
  vector<pair<int,int>> VW(N);
  for(int i=0; i<N; ++i){
    cin >> VW[i].second >> VW[i].first;
    VW[i].first *= -1;
    VW[i].second *= -1;
  }
  for(int i=0; i<M; ++i){
    cin >> X[i];
  }

  sort(VW.begin(), VW.end());
  for(int i=0; i<N; ++i){
    VW[i].first *= -1;
    VW[i].second *= -1;
  }
  


  int ans[Q] = {};

  for(int query=0; query<Q; ++query){
    int L, R;
    cin >> L >> R;
    --L; --R;
    bool M_in[M];
    for(int i=0; i<M; ++i){
      M_in[i] = false;
    }
    for(int i=L; i<=R; ++i){
      M_in[i] = true;
    }

    for(pair<int,int> vw : VW){
      int minimum = INT_MAX;
      int MMM=-1;
      for(int i=0; i<M; ++i){
        if(M_in[i]) continue;

        if(X[i]>=vw.second && minimum>X[i]){
          minimum = X[i];
          MMM = i;
        }
      }
      if(MMM!=-1){
        M_in[MMM] = true;
        ans[query] += vw.first;
      }
    }
  }

  for(int i=0; i<Q; ++i){
    cout << ans[i] << endl;
  }

  return 0;
}
