#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int A, B, W;
  cin >> A >> B >> W;
  W *= 1000;
  
  int minimum = INT_MAX, maximum = -1;
  for(int i=1; ; ++i){
    int Ai = A*i;
    int Bi = B*i;
    if(Ai>W) break;
    if(W>=Ai && W<=Bi){
      minimum = min(minimum, i);
      maximum = max(maximum, i);
    }
  }

  if(maximum==-1){
    cout << "UNSATISFIABLE" << endl;
    return 0;
  }
  
  cout << minimum << " " << maximum << endl;
  

  return 0;
}
