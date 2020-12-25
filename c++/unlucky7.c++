// https://atcoder.jp/contests/abc186/tasks/abc186_c

#include <bits/stdc++.h>
using namespace std;

string convert_oct_str(int number) {
  std::stringstream ss;
  ss << std::oct << number;
  return ss.str();
}

string convert_dec_str(int number) {
  std::stringstream ss;
  ss << std::dec << number;
  return ss.str();
}

bool check_without_seven(string num_str) {
  int pos = num_str.find("7");
  return pos == std::string::npos;
}

int main() {
  int n;
  cin >> n;
  int result = 0;
  for (int i = 1; i <= n; i++){
    string oct_str = convert_oct_str(i);
    string dec_str = convert_dec_str(i);
    if (check_without_seven(oct_str) && check_without_seven(dec_str)) {
      result++;
    }
  }
  cout << result << endl;
}