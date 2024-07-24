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

ll bpw(ll a, ll b) {//binary raising A to the power D
	if (b == 0) {
		return 1;
	}if (b % 2 == 0) {
		ll t = bpw(a, b / 2);
		return t * t;
	}
	else {
		return bpw(a, b - 1) * a;
	}
}

ll konq(ll a, ll b, ll c) {//move a to the left by b signs and multiply by c
	return a * bpw(10, b) * c;
}

ll main() {
	ios::sync_with_stdio(0);//passively speeds up code
	cin.tie(0);//passively speeds up code
	cout.tie(0);//passively speeds up code
	ll n;
	cin >> n;
	vl a(n);//typedef vector<ll> vl;
	vl le(4);//a vector that stores a number of numbers with a length equal to the ordinal number
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		ans += a[i] * n;//put all the leftovers
		string s = to_string(a[i]);
		le[s.size() - 1] += 1;//length
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < 4; j++) {
			ans += konq(a[i], j + 1, le[j]);
		}
	}
	cout << ans;
}
