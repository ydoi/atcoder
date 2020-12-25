// https://atcoder.jp/contests/abc156/tasks/abc156_b
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  int power = 0;
  cin >> n >> k;
  while (n > 0) {
    n = n / k;
    power++;
  }
  cout << power << endl;
}