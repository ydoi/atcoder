// https://atcoder.jp/contests/abc183/tasks/abc183_b
#include<bits/stdc++.h>
using namespace std;
int main() {
  int Sx, Sy, Gx, Gy;
  cin >> Sx >> Sy >> Gx >> Gy;
  
  //Sy = ((Gy + Sy) / (Gx - Sx) * (x - Sx));
  
  float ans =  (float)Sy / ((float)(Gy + Sy) / (float)(Gx - Sx)) + (float)Sx;
  
  // double ans = Sy / ((Gy + Sy) / (Gx - Sx)) + Sx;
  
  cout << fixed << setprecision(15) << ans << endl;
}