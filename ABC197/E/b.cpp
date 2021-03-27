#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;
  vector<ll> X(N);
  vector<pair<int,int>> C(N); //(color, i_ballnumber)

  for(int i=0; i<N; ++i){
    int c;
    cin >> X[i] >> c;
    C[i] = {c, i};
  }
  sort(C.begin(), C.end());
  
  ll now = 0;

  int idx = 0;
  vector<vector<ll>> ball(N); //coordinates of ball with same color
  ball[0].push_back(X[C[0].second]);
  int prev_c = C[0].first;
  for(int i=1; i<N; ++i){
    if(C[i].first == prev_c){
      ball[idx].push_back(X[C[i].second]);
    }else{
      ++idx;
      prev_c = C[i].first;
      ball[idx].push_back(X[C[i].second]);
    }
  }

  vector<pair<ll,ll>> min_max;
  for(int i=0; i<=idx; ++i){
    min_max.push_back({*min_element(ball[i].begin(), ball[i].end()), *max_element(ball[i].begin(), ball[i].end())});
  }
  
  /* debug */
  cout << endl;
  for(int i=0; i<=idx; ++i){
    for(int b:ball[i]){
      cout << b << " ";
    }
    cout << endl;
  }
  cout << endl;
  for(int i=0; i<=idx; ++i){
    cout << min_max[i].first << "," << min_max[i].second << endl;
  }
  cout << endl;

  ll ans = 0;

  for(pair<ll,ll> mm: min_max){
    if(now <= mm.first){
      ans += mm.second - now;
      now = mm.second;
    }else if(now >= mm.second){
      ans += now - mm.first;
      now = mm.first;
    }else if(abs(now-mm.first) >= abs(now-mm.second)){
      ans += 2*(mm.second - now)+(now-mm.first);
      now = mm.first;
    }else{
      cout << "debug: " << ans << " " << 2*(now-mm.first)+(mm.second-now) << endl;
      ans += 2*(now - mm.first)+(mm.second-now);
      now = mm.second;
    }

    cout << "ans:" << ans << " now:" << now << endl;
  }
  
  cout << ans << endl;

  return 0;
}
