#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases() int testcase; cin >> testcase; while(testcase--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main()
{
    Mob;
    int n; cin >> n;
    int x, y; cin >> x >> y;
    pair<int, int> arr[n];
    for(int i=0; i<n; i++) cin >> arr[i].fi >> arr[i].se;
    int res = 0;
    for(int i=0; i<n; i++){
        if(arr[i].fi==100000 and arr[i].se==100000) continue;
        for(int j=i+1; j<n; j++){
            if((arr[i].fi-x)*(arr[j].se-y)==(arr[j].fi-x)*(arr[i].se-y)){
                arr[j].fi = 100000;
                arr[j].se = 100000;
            }
        }
        res++;
    }
    cout << res << el;
    return 0;
}

// cheated, editorial

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/