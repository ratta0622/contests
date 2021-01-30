#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, S, D;
  cin >> N >> S >> D;
  bool flag = true;
  for(int i=0;i<N;++i){
    int X,Y;
    cin >> X >> Y;
    if(X>=S || Y<=D) continue;
    flag = false;
  }
  
  if(flag){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }

  return 0;
}
