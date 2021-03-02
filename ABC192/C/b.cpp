#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int g1(int x){
  vector<int> sequence;
  while(x!=0){
    sequence.push_back(x%10);
    x/=10;
  }
  sort(sequence.begin(), sequence.end(),[](int a, int b){return a>b;});

  int g1_return = 0;
  for(int seq:sequence){
    g1_return *= 10;
    g1_return += seq;
  }
  return g1_return;
}

int g2(int x){
  vector<int> sequence;
  while(x!=0){
    sequence.push_back(x%10);
    x/=10;
  }
  sort(sequence.begin(), sequence.end(),[](int a, int b){return a<b;});

  int g2_return = 0;
  for(int seq:sequence){
    g2_return *= 10;
    g2_return += seq;
  }
  return g2_return;
}


int main(){
  int N, K;
  cin >> N >> K;

  for(int i=0; i<K; ++i){
    N = g1(N)-g2(N);
  }

  cout << N << endl;

  return 0;
}
