// https://atcoder.jp/contests/abc079/tasks/abc079_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<uint64_t> memo(n + 1);
  memo.at(0) = 2;
  memo.at(1) = 1;
  for (int i = 2; i < n + 1; i++) {
    memo.at(i) = memo.at(i - 1) + memo.at(i - 2);
  }
  cout << memo.at(n) << endl;
}