// https://atcoder.jp/contests/typical90/tasks/typical90_j
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<pair<int, int>> data(N);
  for (int i = 0; i < N; ++i) {
    int C; cin >> C;
    int P; cin >> P;
    if (C == 1) {
      if (i == 0) {
        pair<int, int> sum = make_pair(P, 0);
        data.at(0) = sum;
      } else {
        data.at(i) = make_pair(data.at(i - 1).first + P, data.at(i - 1).second);
      }
    } else {
      if (i == 0) {
        pair<int, int> sum = make_pair(0, P);
        data.at(0) = sum;
      } else {
        data.at(i) = make_pair(data.at(i - 1).first, data.at(i - 1).second + P);
      }
    }
  }
  
  int Q; cin >> Q;
  for (int i = 0; i < Q; ++i) {
    int L, R; cin >> L >> R;
    L--;
    R--;
    if (L > 0) {
      cout << data.at(R).first - data.at(L - 1).first << " ";
      cout << data.at(R).second - data.at(L - 1).second << endl;
    } else {
      cout << data.at(R).first << " ";
      cout << data.at(R).second << endl;
    }
  }
}