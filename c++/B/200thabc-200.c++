// https://atcoder.jp/contests/abc200/tasks/abc200_b
#include<bits/stdc++.h>
using namespace std;
int main(){
  int N, K; cin >> N >> K;
  long long ans = N;
  for (int i = 0; i < K; ++i) {
    if (ans % 200 == 0) {
      ans = ans / 200;
    } else {
      ans = ans * 1000 + 200;
    }
  }
  cout << ans << endl;
}