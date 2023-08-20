#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) int t; cin >> t; while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define eL '\n'


bool compare(pair<int, int> a, pair<int, int> b){
    if(a.fi==b.fi) return a.se < b.se;
    return a.fi > b.fi;
}

int main()
{
    Mob;
    int k, n; cin >> k >> n;
    pair<int, int> arr[k+1];
    for(int i=0; i<k; i++){
        cin >> arr[i].fi >> arr[i].se;
    }
    sort(arr, arr+k, compare);
    int a = arr[n-1].fi;
    int b = arr[n-1].se;
    int res = 0;
    for(int i=0; i<k; i++){
        if(arr[i].fi==a and arr[i].se==b) res++;
    }
    cout << res << eL;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/