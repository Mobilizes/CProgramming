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


int main()
{
    Mob;
    int n; cin >> n;
    int arr[n+1]; for(int i=0; i<n; i++) cin >> arr[i];
    int ans = 0;
    for(int i=0; i<n; i++){
        int res = 1;
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[j-1]) break;
            res++;
        }
        for(int j=i-1; j>=0; j--){
            if(arr[j]>arr[j+1]) break;
            res++;
        }
        ans = max(res, ans);
    }
    cout << ans << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/