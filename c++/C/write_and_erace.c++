// https://atcoder.jp/contests/abc073/tasks/abc073_c
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<int, int> data;
  for (int i = 0; i < N; i++) {
    int num = 0;
    cin >> num;
    data[num]++;
  }
  
  int ans = 0;
  
  for (auto n : data) {
    if (n.second % 2 != 0) ans++;
  }
  
  cout << ans << endl;
}