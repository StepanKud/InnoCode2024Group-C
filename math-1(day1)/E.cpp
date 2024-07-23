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

int del(ll x) {//this number has more than 100 divisors?
	ll d = 1, c = 0;
	for (ll i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			c = 0;
			while (x % i == 0) {
				x /= i;
				c++;
			}
			d *= (c + 1);
		}
	}
	d *= 2;
	if (d >= 100) { 
		return 1; 
	}
	else { 
		return 0; 
	}
}

int main() {
	ios::sync_with_stdio(0);//passively speeds up code
	cin.tie(0);//passively speeds up code
	cout.tie(0);//passively speeds up code
	ll x;
	cin >> x;
	if (x >= 5040000) {
		cout << (x / 50400 + 1) * 50400;
		exit(0);
	}
	for (ll i = x; 100 * i <= 101 * x; i++) {
		if (del(i) == 1) {
			cout << i;
			exit(0);
		}
	}
	cout << -1;
}
