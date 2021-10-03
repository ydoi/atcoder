// https://atcoder.jp/contests/typical90/tasks/typical90_br
#include<bits/stdc++.h>
using namespace std;

int main() {
    // 入力
    int N; cin >> N;
    vector<int> X(N), Y(N);
    for (int i = 0; i < N; ++i) cin >> X[i] >> Y[i];
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    long long ans = 0;
    for (int i = 0; i < N; ++i) {
      ans += abs(X[i] - X[N / 2]);
      ans += abs(Y[i] - Y[N / 2]);
    }

    cout << ans << endl;
}
