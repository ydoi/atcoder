// https://atcoder.jp/contests/typical90/tasks/typical90_a
#include<bits/stdc++.h>
using namespace std;

long long N,L,K; 
long long A[1 << 18];

bool solve(long long ans) {
  long long pre = 0, cnt = 0;
  for (int i = 1; i <= N; ++i) {
    if (A[i] - pre >= ans && L - A[i] >= ans) {
      cnt++;
      pre = A[i];
    }
  }
  return cnt >= K;
}

int main() {
    // 入力
    cin >> N >> L;
    cin >> K;
    for (int i = 1; i <= N; ++i) cin >> A[i];
    
    long long left = -1;
    long long right = L + 1;
    while (right - left > 1) {
      long long mid = left + (right - left) / 2;
      if (solve(mid)) left = mid;
      else right = mid;
    }
    
    cout << left << endl;
}