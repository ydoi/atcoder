// https://atcoder.jp/contests/abc085/tasks/abc085_c
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Y;
  cin >> N >> Y;
  for (int x = 0; x <= N; x++) {
    for (int y = 0; y <= N; y++) {
      if ((10000 * x + 5000 * y + 1000 * (N - x- y)) == Y && x + y <= N) {
         cout << x << " " << y << " " << (N - x- y) << endl;
         return 0;
       } else {
         continue;
       }
    }
  }
  cout << "-1" << " " << "-1" << " " << "-1" << endl;
}