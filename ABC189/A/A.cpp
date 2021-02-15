#include <bits/stdc++.h>
using namespace std;

int main(){
  string c;
  cin >> c;

  char c1 = c[0];
  for(int i=1; i<3; ++i){
    if(c1 != c[i]){
      cout << "Lost" << endl;
      return 0;
    }
  }

  cout << "Won" << endl;

  

  return 0;
}
