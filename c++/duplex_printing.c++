// https://atcoder.jp/contests/abc157/tasks/abc157_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int result = N % 2 == 0 ? N / 2 : N / 2 + 1;
  cout << result << endl;
}