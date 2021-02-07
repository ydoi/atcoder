// https://atcoder.jp/contests/abc048/tasks/abc048_b
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long a, b, x;
  cin >> a >> b >> x;
  
  long long ans = b/x - a/x;
  
  if(a % x == 0) ans += 1;
  
  
  cout << ans << endl;
}