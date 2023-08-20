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


int main()
{
    Mob;
    testcases(t){
        int n; cin >> n;
        int c; cin >> c;
        int arr[n+1]; for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n; i++) arr[i] += i+1;
        sort(arr, arr+n);
        int res = 0;
        for(int i=0; i<n; i++){
            if(arr[i]<=c){
                res++;
                c -= arr[i];
            }
        }
        cout << res << eL;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/