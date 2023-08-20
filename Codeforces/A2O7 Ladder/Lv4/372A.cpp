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


int main()
{
    Mob;
    int n; cin >> n;
    int arr[n];
    int res = n;
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i=0, j=n/2; i<n/2; i++){
        for(;;){
            if(arr[i]*2<=arr[j]){
                res--;
                j++;
                break;
            } else{
                j++;
            }
            if(j==n) break;
        }
        if(j==n) break;
    }
    cout << res << endl;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/