// https://atcoder.jp/contests/arc006/tasks/arc006_3
#include <bits/stdc++.h>
#include <atcoder/all>
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(ll i=ll(a);i<ll(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define rup(x,y) (((x)+(y)-1)/(y))
#define all(x) (x).begin(),(x).end()
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;
using mint = static_modint<1000000007>;
constexpr int INF = 1001001001;
constexpr ll LINF = 4e18;
template<class T> auto min(const T& a){ return *min_element(all(a)); }
template<class T> auto max(const T& a){ return *max_element(all(a)); }
template<class... T> constexpr auto min(T... a) { return min(initializer_list<common_type_t<T...>>{a...}); }
template<class... T> constexpr auto max(T... a) { return max(initializer_list<common_type_t<T...>>{a...}); }
template<class T1, class T2> inline bool chmax(T1 &a, const T2 &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T1, class T2> inline bool chmin(T1 &a, const T2 &b) { if (a>b) { a=b; return 1; } return 0; }
template<class T> istream &operator>>(istream &is, vector<T> &vec){
  for(T& x: vec) is >> x;
  return is;
}
ostream &operator<<(ostream &os, const mint &x) {
    os << x.val();
    return os;
}

int main() {
  int N; cin >> N;
  vector<int> data;
  
  for (int i = 0; i < N; ++i) {
    int item; cin >> item;
    //int item = data.at(i);
    int top = -1;
    int min = 100000 * 50;
    for (int j = 0; j < data.size(); ++j) {
      if (data[j] >= item && chmin(min, data[j])) top = j;
    }
    if (top == - 1) {
      data.push_back(item);
    } else {
      data[top] = item;
    }
  }
    
  cout << data.size() << endl;
}
