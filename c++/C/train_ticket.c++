// https://atcoder.jp/contests/abc079/tasks/abc079_c
#include <bits/stdc++.h>
using namespace std;

int calc(int first, int second, bool op) {
  int result = 0;
  if (op) {
    result =  first + second;
  } else {
    result = first - second;
  }
  return result;
}

string check(string input_str, vector<vector<bool>> &op_pattern) {
  for (int i = 0; i < 8; i++) {
    int until_second = calc(input_str.at(0) - '0',
                      input_str.at(1) - '0',
                      op_pattern.at(i).at(0)
                     );
    int until_third = calc(until_second,
                      input_str.at(2) - '0',
                      op_pattern.at(i).at(1)
                     );
    int until_last = calc(until_third,
                      input_str.at(3) - '0',
                      op_pattern.at(i).at(2)
                     );
    if (until_last == 7) {
      cout << input_str.at(0);
      cout << (op_pattern.at(i).at(0) ? "+" : "-");
      cout << input_str.at(1);
      cout << (op_pattern.at(i).at(1) ? "+" : "-");
      cout << input_str.at(2);
      cout << (op_pattern.at(i).at(2) ? "+" : "-");
      cout << input_str.at(3) << "=7";
      return "";
    }
  }
}

int main() {
  string input_str;
  cin >> input_str;
  vector<vector<bool>> op_pattern = {
    {true, true, true},
    {true, true, false},
    {true, false, true},
    {false, true, true},
    {false, false, true},
    {false, true, false},
    {true, false, false},
    {false, false, false}
  };
  cout << check(input_str, op_pattern) << endl;
  
}