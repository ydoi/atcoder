// https://atcoder.jp/contests/typical90/tasks/typical90_bl
#include<bits/stdc++.h>
using namespace std;

int main() {
    // 入力
    int N, Q; cin >> N >> Q;
    long long A[1 << 18];
    for (int i = 1; i <= N; ++i) cin >> A[i];

    long long L[1 << 18], R[1 << 18], V[1 << 18];
    for (int i = 1; i <= Q; ++i) cin >> L[i] >> R[i] >> V[i];
  
    long long ans = 0;
    long long B[1 << 18];
    for (int i = 1; i <= N - 1; ++i) {
      B[i] = A[i + 1] - A[i];
      ans += abs(B[i]);
    }
  
    for (int i = 1; i <= Q; i++) {
		long long mae = abs(B[L[i] - 1]) + abs(B[R[i]]);
		if (L[i] >= 2) B[L[i] - 1] += V[i];
		if (R[i] <= N - 1) B[R[i]] -= V[i];
		long long ato = abs(B[L[i] - 1]) + abs(B[R[i]]);
		ans += (ato - mae);
		cout << ans << endl;
	}
}
