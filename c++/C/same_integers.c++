// https://atcoder.jp/contests/abc093/tasks/arc094_a
#include<bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int max_num = max(A, max(B, C));
  
  int ans = (max_num - A) / 2 + (max_num - B) / 2 + (max_num - C) / 2;
  int add_one = 0;
  if (max_num % 2 != A % 2)  add_one++;
  if (max_num % 2 != B % 2)  add_one++;
  if (max_num % 2 != C % 2)  add_one++;
  
  if (add_one == 1) {
    ans += 2;
  } else if (add_one == 2) {
    ans++;
  }
  
  cout << ans << endl;
  
}