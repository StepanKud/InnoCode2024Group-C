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

ll gcd(ll a, ll b) {//greatest common divisor
	if (min(a, b) == 0) {
		return max(a, b);
	}
	return gcd(min(a, b), max(a, b) % min(a, b));
}

ll nok(ll a, ll b) {//least common multiple
	return (a * b) / gcd(a, b);
}

int main() {
	ios::sync_with_stdio(0);//passively speeds up code
	cin.tie(0);//passively speeds up code
	cout.tie(0);//passively speeds up code
	ll a, b, c;
	cin >> a >> b >> c;
	ll n = nok(a, b);
	cout << c - c / n;
}
