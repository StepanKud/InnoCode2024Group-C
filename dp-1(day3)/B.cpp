#include<algorithm>
#include<iostream>
#include<numeric>
#include<string>
#include<vector>
#include<deque>
#include<cmath>
#include<array>
#include<queue>
#include<set>
#include<map>

using namespace std;

typedef unsigned long long ull;//From 0 to 18 446 744 073 709 551 615. byte:8
typedef long double ld;//In the range +/- 3.4E-4932 to 1.1E+4932 byte:10-16
typedef long long ll;//From −9 223 372 036 854 775 808 to 9 223 372 036 854 775 807. byte:8
typedef vector<pair<ll, ll>> vpl;
typedef vector<vector<ll>> vvl;
typedef vector<ll> vl;

ll main() {
	ios::sync_with_stdio(0);//passively speeds up code
	cin.tie(0);//passively speeds up code
	cout.tie(0);//passively speeds up code
	ll n, k, q;
	cin >> n >> k >> q;
	vl dp(n);//typedef vector<ll> vl 
	vl l(q);//typedef vector<ll> vl, frogs
	dp[0] = 1;
	for (ll i = 0; i < q; i++) {
		cin >> l[i];
	}
	sort(l.begin(), l.end());
	for (ll i = 1; i < n; i++) {
		for (ll j = 1; j <= k; j++) {//jump from 1 to k
			if (j <= i) {
				dp[i] += dp[i - j];
			}
			else {
				j = k;
			}
		}for (ll h = 0; h < q; h++) {
			if (l[h] == i + 1) {//frogs are not allowed
				dp[i] = 0;
			}
		}
	}
	cout << dp[n - 1];
}
