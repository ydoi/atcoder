// https://atcoder.jp/contests/typical90/tasks/typical90_at
#include<bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int N; cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N);
  for (int i = 0; i < N; ++i) cin >> A[i];
  for (int i = 0; i < N; ++i) cin >> B[i];
  for (int i = 0; i < N; ++i) cin >> C[i];
  
  // 数列の各数値をmod 46で保持
  vector<long long> a(46);
  vector<long long> b(46);
  vector<long long> c(46);
  for (int i = 0; i < N; ++i) {
    ++a[A[i] % 46];
    ++b[B[i] % 46];
    ++c[C[i] % 46];
  }
  
  long long ans = 0;
  for (int i = 0; i < 46; ++i) {
    for (int j = 0; j < 46; ++j) {
      for (int k = 0; k < 46; ++k) {
        if ((i + j + k) % 46 == 0) {
          ans += a[i] * b[j] * c[k];
        }
      }
    }
  }
          
  cout << ans << endl;
}