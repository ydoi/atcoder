// https://atcoder.jp/contests/abc083/tasks/abc083_b

#include <bits/stdc++.h>
using namespace std;

int sum_digits(string num_str) {
  int result = 0;
  for (int i = 0; i < num_str.size(); i++) {
    result += (int)num_str.at(i) - 48;
  }
  return result;
}

int main() {
  int n, min, max;
  cin >> n >> min >> max;
  
  int result = 0;
  for (int i = 1; i <= n; i++){
    string num_str = to_string(i);
    int sum = sum_digits(num_str);
    if (sum >= min && sum <= max) result += i;
  }
  cout << result << endl;
}