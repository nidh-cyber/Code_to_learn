// CODEFORCES : 1520C - Not Adjacent Matrix
// Note that n=2 is the only case where there is no answer.
// in other cases : 1 15 13 10
//                  14 12 9 6
//                  11  8 5 3
//                   7  4 2 16

#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long 
#define lli long long int
#define pb push_back
#define mod 1000000007
#define F first
#define mod 1000000007
#define S second
#define mp make_pair
#define ss stack<int>
#define vi vector<int>
#define vll vector<long long int>
#define all(x) (x).rbegin(),(x).rend()
#define rep for(int i=1;i<=n;i++)
#define re for(int j=m-1;j>=0;j--)
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << "1" << endl;
    return;
  } else if (n == 2) {
    cout << "-1" << endl;
    return;
  }
  vector<vector<int> > a(n, vector<int>(n));
  a[0][0] = 1;
  a[n - 1][n - 1] = n * n;
  int x = n * n - 1;
  for (int i = 1; i + 1 < n; i++) {
    for (int j = i; j >= 0; j--, x--) {
      a[i - j][j] = x;
    }
  }
  x = 2;
  for (int j = n - 2; j > 0; j--) {
    for (int i = 0; i < n - j; i++, x++) {
      a[n - i - 1][j + i] = x;
    }
  }
  for (int i = n - 1; i >= 0; i--, x++) {
    a[i][n - i - 1] = x;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}
