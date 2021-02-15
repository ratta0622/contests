#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<string> exclamation;
  set<string> non_exclamation;
  for(int i=0; i<N; ++i){
    string S;
    cin >> S;
    if(S[0]=='!'){
      string s = S.substr(1,S.size()-1);
      exclamation.insert(s);
    }else{
      non_exclamation.insert(S);
    }
  }


  int ans = 0;
  
  for(string s:exclamation){
    auto iterator = non_exclamation.find(s);    
    if(iterator!=non_exclamation.end()){
      cout << s << endl;
      return 0;
    }
  }

  cout << "satisfiable" << endl;

  return 0;
}
