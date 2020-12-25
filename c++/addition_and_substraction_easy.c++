// https://atcoder.jp/contests/abc050/tasks/abc050_a
#include <bits/stdc++.h>
using namespace std;

int calc(int a, int b, string op) {
  if (op == "+") {
    return a + b;
  } else {
    return a - b;
  }
}
 
int main() {
  int a, b;
  string op;
  cin >> a >> op >> b;
  cout << calc(a, b, op) << endl;
}