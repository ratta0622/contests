#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
using P = pair<int,int>;

int main(){
  int N;
  cin >> N;
  int A[N];
  for(int i=0; i<N; ++i){
    cin >> A[i];
  }

  int ans = INT_MIN;
  for(int i=0; i<N; ++i){
    for(int j=i; j<N; ++j){
      int x = *min_element(A+i, A+j+1);
      ans = max(ans, x*(j-i+1));
    }
  }
  
  cout << ans << endl;

  return 0;
}
