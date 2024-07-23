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
  ios::sync_with_stdio(0); 
  cin.tie(0); 
  cout.tie(0); 
  ll n, b; 
  cin >> n >> b; 
  vector<bool> a(b + 1, true); 
  a[0] = false; 
  a[1] = false; 
  for (ll i = 2; i <= b; i++) { 
    if (a[i]) {//entry if(a[i]) and if(a[i]==true) mean the same thing 
      for (ll j = i * i; j <= b; j += i) { 
        a[j] = false; 
      }  
    } 
  } 
  for (ll i = n; i <= b; i++) { 
    if (a[i]) {//entry if(a[i]) and if(a[i]==true) mean the same thing 
      cout << i << " "; 
    } 
  } 
}
