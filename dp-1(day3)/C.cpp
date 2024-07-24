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

int main() {
    ios::sync_with_stdio(0);//passively speeds up code
    cin.tie(0);//passively speeds up code
    cout.tie(0);//passively speeds up code
    ll n, k; cin >> n >> k;
    vl a(n);
    for (ll i = 1; i < n - 1; i++){
        cin >> a[i];
    }
    vl dp(n);
    vl parent(n, -1);
    for (ll i = 1; i < n; i++) {
        ll mx = -1000000000;
        for (ll j = 1; j <= k; j++){
            if (i < j){
                break;
	    }
            else {
                mx = max(mx, dp[i - j]);
                if (dp[i - j] == mx){
                    parent[i] = i - j;
		}
            }
	}
        dp[i] = mx + a[i];
    }
    cout << dp[n - 1] << '\n';
    ll ind = n - 1;
    vl path;
    path.push_back(ind);
    while (ind != 0) {
        ind = parent[ind];
        path.push_back(ind);
    }
    cout << path.size() - 1 << '\n';//'\n' is better than endl
    for (ll i = (ll)path.size() - 1; i >= 0; i--)
        cout << path[i] + 1 << " ";
}
