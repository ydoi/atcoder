// https://atcoder.jp/contests/abc185/tasks/abc185_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(4);
  int min = 100;
  for (int i = 0; i < 4; i++) {
    cin >> data.at(i);
    if (min > data.at(i)) min = data.at(i);
  }
  cout << min << endl;
}