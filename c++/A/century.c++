// https://atcoder.jp/contests/abc200/tasks/abc200_a
#include<bits/stdc++.h>
using namespace std;
int main(){
  int N; cin >> N;
  int ans = N % 100  ==  0 ? N / 100 : N / 100 + 1;
  cout << ans << endl;
}