#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll K;
  string S, T;
  cin >> K >> S >> T;
  ll cards[10]={};
  vector<ll> s,t;
  for(auto a:S){
    if(a=='#') break;
    s.push_back(a-'0');
  }
  for(auto a:T){
    if(a=='#') break;
    t.push_back(a-'0');
  }
  for(auto num:s){
    ++cards[num];
  }
  for(auto num:t){
    ++cards[num];
  }
  for(ll i=1; i<=9; ++i){
    cards[i] = K-cards[i];
  }


  /* ll Takahashi = 0; */
  /* ll Aoki= 0; */
  /* for(auto num:s){ */
  /*   Takahashi += point(num); */
  /* } */
  /* for(auto num:t){ */
  /*   Aoki += point(num); */
  /* } */
  /* ll diff = Takahashi - Aoki; */

  /* cout << Takahashi << endl; */
  /* cout << Aoki << endl; */

  /* ll Takahashi_win = 0; */
  /* for(ll i=1; i<=9; ++i){//Takahashi */
  /*   for(ll j=1; j<=9; ++j){//Aoki */
  /*     if(point(i)-point(j) > diff){ */
  /*       if(i==j){ */
  /*         Takahashi_win += cards[i]*(cards[i]-1)/2; */
  /*       }else{ */
  /*         Takahashi_win += cards[i]*cards[j]; */
  /*       } */
  /*     } */
  /*   } */
  /* } */

  ll Takahashi_win = 0;
  ll Takahashi=0, Aoki=0;
  for(ll i=1; i<=9; ++i){//Takahashi
    for(ll j=1; j<=9; ++j){//Aoki
      Takahashi = 0; Aoki = 0;
      vector<ll> s_add = s;
      vector<ll> t_add = t;
      s_add.push_back(i); t_add.push_back(j);
      for(int i=1; i<=9; ++i){
        int power = 0;
        for(auto num:s_add){
          if(num == i) ++power;
        }
        Takahashi += i*pow(10,power);
        power = 0;
        for(auto num:t_add){
          if(num == i) ++power;
        }
        Aoki += i*pow(10,power);
      }
      
      if(Takahashi>Aoki){
        if(i==j){
          Takahashi_win += cards[i]*(cards[i]-1);
        }else{
          Takahashi_win += cards[i]*cards[j];
        }
      }
    }
  }

  ll all = (9*K-8)*(9*K-9);

  long double ans;
  ans = (long double)Takahashi_win/(long double)all;
  
  cout << ans << endl;

  return 0;
}
