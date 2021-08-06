// https://atcoder.jp/contests/typical90/tasks/typical90_x
#include<bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int N, K; cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; ++i) cin >> A.at(i);
  vector<int> B(N);
  for (int i = 0; i < N; ++i) cin >> B.at(i);
  
  int diffs = 0; 
  for (int i = 0; i < N; ++i) {
    diffs += abs(A.at(i) - B.at(i));
  }
  
  string ans = "No";
  if (diffs <= K) {
    if ( (K - diffs) % 2 == 0) {
      ans = "Yes";
    }
  }
  
  cout << ans << endl;
}