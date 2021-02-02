// https://atcoder.jp/contests/abc070/tasks/abc070_b
#include<bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  
  int ans;
  if (A <= C) {
    int start = C;
    int end = min(B, D);
    ans = end - start;
  } else {
    int start = A;
    int end = min(B, D);
    ans = end - start;
  }
  
  if (ans < 0) ans = 0;
  cout << ans << endl;
}