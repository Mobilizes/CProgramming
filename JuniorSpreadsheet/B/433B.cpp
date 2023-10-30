#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'

ll arr[100002];
ll sorted[1000012];

int main()
{
    Mob;
    int n; cin >> n;
    arr[0] = 0;
    sorted[0] = 0;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    sort(sorted, sorted+n+1);
    for(int i=2; i<=n; i++) arr[i] += arr[i-1];
    for(int i=2; i<=n; i++) sorted[i] += sorted[i-1];
    // for(int i=1; i<=n; i++) cout << sorted[i] << ' ';
    // cout << el;
    tcs(){
        int q, l, r; cin >> q >> l >> r;
        l--;
        if(q==1) cout << arr[r] - arr[l] << el;
        if(q==2) cout << sorted[r] - sorted[l] << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/