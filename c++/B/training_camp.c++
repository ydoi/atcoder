// https://atcoder.jp/contests/abc055/tasks/abc055_b
#include<bits/stdc++.h>
using namespace std;

int main () {
  int N;
  cin >> N;
  
  int big = 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 + 7;
  
  long long power = 1;
  for (int i = 1; i <= N; i++) {
    power = (power * i) % big;
  }
  
  cout << power << endl;
}