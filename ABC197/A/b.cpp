#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string S;
  cin >> S;
  char temp=S[0];

  S[0] = S[1]; S[1] = S[2]; S[2] = temp;

  cout << S << endl;
  

  return 0;
}
