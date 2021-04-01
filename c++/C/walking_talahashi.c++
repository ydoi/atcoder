// https://atcoder.jp/contests/abc175/tasks/abc175_c
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long X, K, D; cin >> X >> K >> D;
  X = abs(X);
  long long ans = 0;

  if (X / D > K) {
    ans = X - D * K;
  } else {
    if ((K - X / D) % 2 == 0){
      ans = X % D;
    } else {
      ans = abs(X % D - D);
    }
  }
  cout << ans << endl;
}