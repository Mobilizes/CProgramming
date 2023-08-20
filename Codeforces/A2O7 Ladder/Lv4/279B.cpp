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
#define el '\n'


int main()
{
    Mob;
    int n, t; cin >> n >> t;
    int arr[n+5];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int res = 0;
    int sum = 0;
    for(int i=0, j=0; i<n; i++){
        sum += arr[i];
        if(sum>t){
            while(j<=i and sum>t){
                sum -= arr[j];
                j++;
            }
        }
        // cout << i << ' ' << j << el;
        res = max(res, i-j+1);
    }
    cout << res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/