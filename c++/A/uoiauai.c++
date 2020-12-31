// https://atcoder.jp/contests/abc049/tasks/abc049_a
#include <bits/stdc++.h>
using namespace std;

string check(char input) {
  if (input == 'a' ||
      input == 'i' ||
      input == 'u' ||
      input == 'e'  ||
      input == 'o') {
    return "vowel";
  } else {
    return "consonant";
  }
}

int main() {
  string input;
  cin >> input;
  cout << check(input.at(0)) << endl;
}