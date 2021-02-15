#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  double X;
  cin >> N >> X;
  double al = 0.0;
  for(int i=1; i<=N; ++i){
    double V, P;
    cin >> V >> P;
    al += 0.01*V*P;
    if(al > X){
      cout << i << endl;
      return 0;
    }
  }


  cout << -1 << endl;

  return 0;
}
