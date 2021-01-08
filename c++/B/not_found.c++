// https://atcoder.jp/contests/abc071/tasks/abc071_b
#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  cin >> S;
  for (int i = 0; i < S.size(); i++) {
    string s;
    s.push_back(S.at(i));
    if (alphabet.find(s) != string::npos) {
      alphabet.erase(alphabet.find(s), 1);
    }
  }
  
  if (alphabet.size() == 0) {
    cout << "None" << endl;
  } else {
    cout << alphabet.at(0) << endl;
  }
}