#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 
ll power(ll a, ll b){
    if(b==0) return 1;
    if(a==0) return 0;
    ll x = power(a, b/2) % mod;
    if(b%2==0) return (x * x) % mod;
    else if(b%2==1) return (((x * x) % mod) * a);
}

int main()
{
    Mob;
    int n; cin >> n;
    while(n--){
        ll a, b, c; cin >> a >> b >> c;
        ll B = power(b, c) % mod;
        cout << power(a, B) % mod << endl;
    }
    return 0;
}