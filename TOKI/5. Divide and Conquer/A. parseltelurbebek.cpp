#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'

ll n, m;
ll arr[400000];

ll binarysearch(ll x){
    ll l = 1, r = ll(9e18);
    while(l<=r){
        ll mid = (l+r)/2;
        ll k = 0;
        for(int i=0; i<n; i++) k += mid/arr[i];
        if(k>=x) r = mid - 1;
        else l = mid + 1;
    }
    return l;
}

int main()
{
    Mob;
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << binarysearch(m+1) - binarysearch(m) << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/