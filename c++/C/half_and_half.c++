// https://atcoder.jp/contests/arc096/tasks/arc096_a
#include<bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;
  
  int ans = 2147483647;
  if (X > Y) {
      for (int i = 0; i <= X; i++) {
        ans = min(ans, A * (X - i) + max(B * (Y - i), 0) + 2 * C * i);
      }
   } else {
      for (int i = 0; i <= Y; i++) {
        ans = min(ans, max(A * (X - i), 0) + B * (Y - i) + 2 * C * i);
      }
    }
  
  cout << ans << endl;
}