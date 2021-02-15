#include <bits/stdc++.h>
using namespace std;

double distance(double x, double y){
  return pow(x,2) + double(y,2);
}

int main(){
  double X, Y, R;
  cin >> X >> Y >> R;  
  int _x=X;
  int _y=Y;
  X -= (double)_x;
  Y -= (double)_y;
  int max_x = X+R;
  int min_x = X-R;
  double dist=pow(R,2);
  
  pair<int,int> cnt[max_x-min_x+1];
  int index=-1;
  for(int x=min_x; x<=max_x; ++x){
    ++index;
    int ny, py;
    if(index==0){
      ny=0;py=0;
    }else{
      ny=cnt[index-1].first;
      py=cnt[index-1].second;
    }
    bool flag=true;
    while(flag){
      flag = false;
      if(dist<=distance(x,ny-1)) { --ny; flag = true;}
      if(dist<=distance(y,py+1)) { ++py; flag = true;}
    }
  }

  return 0;
}
