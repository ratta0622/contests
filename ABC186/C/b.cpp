#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
  int N;
  cin >> N;

  int ans = 0;
  for(int num=1; num<=N; ++num){
    int n = num;
    string str_n = to_string(n);
    if(str_n.find("7")!=string::npos) continue;

    bool flag_8 = false;
    for(int i=5; i>=0; --i){
      int pow8 = pow(8,i);
      if(n<pow8) continue;
      if(n>=7*pow8){
        flag_8 = true;
        break;
      }
      n -= (n/pow8)*pow8;
    }
    if(flag_8) continue;

    ++ans;
  }

  cout << ans << endl;
  
  return 0;
}
