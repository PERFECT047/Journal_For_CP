#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int N = 3e5;
const int mod = 1000000007;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string str;
    cin >> str;
    ll n = str.size();
    vector<ll> dynp(n);
    vector<ll> last0(n, -1);
    vector<ll> last1(n, -1);
    for (ll i = 0; i < n; i++) {
      if (str[i] == '0') {
        last0[i] = i;
      } else {
        if (i) {
          last0[i] = last0[i - 1];
        }
      }
    }
    for (ll i = 0; i < n; i++) {
      if (str[i] == '1') {
        last1[i] = i;
      } else {
        if (i) {
          last1[i] = last1[i - 1];
        }
      }
    }
    dynp[0] = 0;
    ll ans = 1;
    for (ll i = 1; i < n; i++) {
      if (str[i] == '?') {
        dynp[i] = dynp[i - 1];
      } else if (str[i] == '1') {
        if (last0[i - 1] == last1[i - 1]) {
          dynp[i] = 0;
        } else if (last0[i - 1] > last1[i - 1]) {
          ll idx = last0[i - 1];
          if ((idx & 1) != (i & 1)) {
            dynp[i] = dynp[idx];
          } else {
            dynp[i] = idx + 1;
          }
        } else {
          ll idx = last1[i - 1];
          if ((idx & 1) == (i & 1)) {
            dynp[i] = dynp[idx];
          } else {
            dynp[i] = idx + 1;
          }
        }
      } else {
        if (last0[i - 1] == last1[i - 1]) {
          dynp[i] = 0;
        } else if (last0[i - 1] > last1[i - 1]) {
          ll idx = last0[i - 1];
          if ((idx & 1) == (i & 1)) {
            dynp[i] = dynp[idx];
          } else {
            dynp[i] = idx + 1;
          }
        } else {
          ll idx = last1[i - 1];
          if ((idx & 1) != (i & 1)) {
            dynp[i] = dynp[idx];
          } else {
            dynp[i] = idx + 1;
          }
        }
      }
      ans += (i - dynp[i] + 1);
    }
    cout << ans << endl;
  }
}