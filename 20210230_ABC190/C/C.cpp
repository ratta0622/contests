#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, K;
  cin >> N >> M;
  int A[M], B[M];
  for(int i=0; i<M; ++i){
    cin >> A[i] >> B[i];
    --A[i]; --B[i];
  }
  cin >> K;
  int C[K], D[K];
  for(int i=0; i<K; ++i){
    cin >> C[i] >> D[i];
    --C[i]; --D[i];
  }

  int ans = 0;
  for(int mask=0; mask<1<<K; ++mask){
    int cnt = 0;

    bool dish[N];
    for(int i=0; i<N; ++i) dish[i] =false;
    

    for(int i=0; i<K; ++i){
      if(mask&(1<<i)){ //i is 1
        dish[C[i]] = true;
      }else{
        dish[D[i]] = true;
      }
    }

    for(int i=0; i<M; ++i){
      if(dish[A[i]] && dish[B[i]]) ++cnt;
    }

    ans = max(ans,cnt);
  }
  

  cout << ans << endl;

  return 0;
}
