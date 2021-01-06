// https://atcoder.jp/contests/abc090/tasks/abc090_b
#include <bits/stdc++.h>
using namespace std;

bool is_palindromic(int number) {
  string str_num = to_string(number);
  string reverse_str_num = to_string(number);
  reverse(reverse_str_num.begin(), reverse_str_num.end());
  return str_num == reverse_str_num;
}

int main() {
  int A, B;
  cin >> A >> B;
  
  int ans = 0;
  for (int i = A; i <= B; i++) {
    if (is_palindromic(i)) ans++;
  }
  cout << ans << endl;
}