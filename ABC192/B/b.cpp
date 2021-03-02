#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string S;
  cin >> S;

  int even_odd = 0;
  bool flag = false;
  for(char s:S){
    if(flag) break;
    ++even_odd;
    even_odd %= 2;
    switch(even_odd){
      case 0:
        if(s>='a' && s<='z') flag = true;
        break;
      case 1:
        if(s>='A' && s<='Z') flag = true;
        break;
    }
  }
  
  if(flag) cout << "No" << endl;
  else cout << "Yes" << endl;


  return 0;
}
