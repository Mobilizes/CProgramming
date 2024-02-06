#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int sumArray(int *pfs, int l, int r){
    return pfs[r] - pfs[l];
}

int dp(int *arr, int arrsize, int n, int k, int x, int *pfs){
    int sum = sumArray(pfs, 0, n-x) - sumArray(pfs, n-x, n);
    if(n<=x) sum = -sumArray(pfs, 0, n);

    if(arrsize==n+k) return sum;
    return max(sum, dp(arr, arrsize, n-1, k, x, pfs));
}

int main(){
    Mob;
    tcs(){
        int n, k, x; cin >> n >> k >> x;
        int arr[n+5]; for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        int pfs[n+5]; pfs[0] = 0; pfs[1] = arr[0];
        for(int i=2; i<=n; i++) pfs[i] = pfs[i-1] + arr[i-1];
        // for(int i=1; i<=n; i++) cout << pfs[i] << ' ';
        // cout << el;
        
        cout << dp(arr, n, n, k, x, pfs) << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/ 