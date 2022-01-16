//https://atcoder.jp/contests/typical90/tasks/typical90_bv
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  string S; cin >> S;
  
  long long ans = 0;
  for (int i = 0; i < N; ++i) {
    if (S[i] == 'b') ans +=  (1LL << i);
    if (S[i] == 'c') ans += 2LL * (1LL << i);
  }
  
  cout << ans << endl;
}

