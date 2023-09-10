#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase-->0)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


vector<bool> prep(10000001, true);
vector<ll> prime;

void sieve(){
    for(int i=2; i*i<=10000000; i++){
        if(prep[i]) for(int j=i*i; j<=10000000; j+=i) prep[j] = false;
    }
    for(ll i=2; i<=10000000; i++){
        if(prep[i]) prime.push_back(i);
    }
}

int main()
{
    Mob;
    sieve();
    int t; cin >> t;
    for(;t>0; t--){
        ll l, r; cin >> l >> r;
        if(l==r){
            if(prep[r]) cout << -1 << el; 
            else{
                for(int i=0; i<prime.size(); i++){
                    if(r % prime[i] == 0){
                        cout << prime[i] << ' ' << r-prime[i] << el;
                        break;
                    }
                }
            }
        } else{
            if(r<=3) cout << -1 << el;
            else if(r&1) cout << 2 << ' ' << r-3 << el;
            else cout << 2 << ' ' << r-2 << el;
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/