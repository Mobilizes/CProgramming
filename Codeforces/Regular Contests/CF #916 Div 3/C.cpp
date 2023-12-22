#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'

int n, k; 
int a[200005], b[200005];

int main(){
    Mob;
    tcs(){
        cin >> n >> k;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        // for(int i=1; i<n; i++) a[i] += a[i-1];
        for(int i=1; i<n; i++) b[i] = max(b[i], b[i-1]);
        int sum[n+5]; sum[0] = a[0];
        k--;
        for(int i=1; i<n; i++){
            if(k>0){
                sum[i] = sum[i-1] + a[i];
                sum[i-1] += b[i-1] * k;
                k--;
            } else sum[i] = 0;
        }
        sum[n-1] += k * b[n-1];
        int res = 0;
        for(int i=0; i<n; i++) res = max(res, sum[i]);
        cout << res << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/