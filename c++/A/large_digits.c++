// https://atcoder.jp/contests/abc187/tasks/abc187_a
#include<bits/stdc++.h>
using namespace std;

int sum_digit(int number) {
  string num_str = to_string(number);
  int digit = num_str.size();
  int sum = 0;
  for (int i = 0; i < digit; i++) {
    sum += num_str.at(i) - 48;
  }
  return sum;
}

int main() {
  int A, B;
  cin >> A >> B;
  int sum_a = sum_digit(A);
  int sum_b = sum_digit(B);
  int max = sum_a > sum_b ? sum_a : sum_b;
  cout << max << endl;
}