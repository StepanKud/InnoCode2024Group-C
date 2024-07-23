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
 
int prostate_check(ll c) {//checking that a number is prime 
 ll ans = 0; 
 for (int i = 2; i <= pow(c, 0.5); i++) { 
  if (c % i == 0) { 
   return 1; 
  } 
 } 
 return ans; 
} 
 
int main() { 
 ios::sync_with_stdio(0);//passively speeds up code 
 cin.tie(0);//passively speeds up code 
 cout.tie(0);//passively speeds up code 
 ll n; 
 cin >> n; 
 for (ll i = 2; i < pow(n, 0.5); i++) { 
  if (n % i == 0 and prostate_check(i) == 0 and prostate_check(n / i) == 0) { 
   cout << "YES"; 
   exit(0); 
  } 
 } 
 cout << "NO"; 
}
