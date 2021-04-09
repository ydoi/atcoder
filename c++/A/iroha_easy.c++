// https://atcoder.jp/contests/abc042/tasks/abc042_a
#include <bits/stdc++.h>
using namespace std;

int main() {
      int a,b,c; cin>>a>>b>>c;
    map<int,int> data;
    string ans = "NO";
    if (a==5||a==7)data[a] += a;
    if(b==5||b==7)data[b] +=b;
    if(c==5||c==7)data[c] +=c;
    if(data[5]==10&&data[7]==7) ans="YES";
    cout<<ans<<endl;
}