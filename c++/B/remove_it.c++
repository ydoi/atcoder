// https://atcoder.jp/contests/abc191/tasks/abc191_b

#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int X;
  cin >> N >> X;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;
    if (temp == X) continue;
    cout << temp << " ";
  }
  cout << endl;
}