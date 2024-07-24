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
    ll n, c = 0, p = 0, ans = 1;
    cin >> n;
    n += 1;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            c = 0;
            while (n % i == 0) {
                n /= i;
                c++;
            }
            ans *= (c + 1);
        }
    }
    if (n > 1) {
        ans *= 2;
    }
    cout << ans;
}
//x+y+x*y=n
//x*(y+1)+y=n |+1
//x*(y+1)+y+1=n+1
//(y+1)*(x+1)=n+1
//(x+1)=(n+1)/(y+1)
