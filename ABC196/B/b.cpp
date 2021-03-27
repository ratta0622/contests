#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string X;
  cin >> X;

  for(char s : X){
    if(s == '.') break; // <-. only
    cout << s;
  }
  cout << endl;

  return 0;
}
