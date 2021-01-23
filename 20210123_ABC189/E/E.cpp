#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
  int N, M, Q;
  cin >> N;
  vector<P> co(N);
  for(int i=0; i<N; ++i){
    int X, Y;
    cin >> X >> Y;
    co[i].first = X;
    co[i].second = Y;
  }
  cin >> M;
  vector<P> op(M);
  for(int i=0; i<M; ++i){
    int operation;
    int p;
    cin >> operation;
      switch(operation){
        case 1:
          op[i].first = operation;
          op[i].second = 0;
          break;
        case 2:
          op[i].first = operation;
          op[i].second = 0;
          break;
        case 3:
          op[i].first = operation;
          cin >> p;
          op[i].second = p;
          break;
        case 4:
          op[i].first = operation;
          cin >> p;
          op[i].second = p;
          break;
      }
  }
  cin >> Q;
  vector<P> AB(Q);
  for(int i=0; i<Q; ++i){
    int A, B;
    cin >> A >> B;
    AB[i].first = A;
    AB[i].second = B;
  }
  sort(AB.begin(), AB.end());

  for(int i=0; i<=M; ++i){
    for(int k=0; k<Q; ++k){
      if(AB[k].first==i){
        cout << co[AB[k].second].first << " " << co[AB[k].second].second << endl;
      }
    }
    if(i==M) break;
    for(int j=0; j<N; ++j){
      int temp;
      switch(op[i].first){
        case 1:
          temp = co[i].first;
          co[i].first = co[i].second;
          co[i].second = -temp;
          break;
        case 2:
          temp = co[i].first;
          co[i].first = -co[i].second;
          co[i].second = temp;
          break;
        case 3:
          co[i].first = 2*op[i].second-co[i].first;
          break;
        case 4:
          co[i].second = 2*op[i].second-co[i].second;
          break;
      }
    }
  }
  

  return 0;
}
