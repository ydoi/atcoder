// https://atcoder.jp/contests/abc085/tasks/abc085_b
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  set<int> mochis;
  for (int i = 0; i < n; i++) {
    int mochi;
    cin >> mochi;
    mochis.insert(mochi);
  }
  cout << mochis.size() << endl;
}