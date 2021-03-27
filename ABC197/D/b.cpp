#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N;
  double x0, y0, xN2, yN2;
  cin >> N >> x0 >> y0 >> xN2 >> yN2;

  double Ox = (x0+xN2)/2.0, Oy = (y0+yN2)/2.0;
  double x = x0-Ox, y = y0-Oy;
  double angle = 2.0*M_PI/(double)N;

  double ans_x = x*cos(angle) - y*sin(angle) +Ox;
  double ans_y = x*sin(angle) + y*cos(angle) +Oy;
  
  cout << ans_x << " " << ans_y << endl;

  return 0;
}
