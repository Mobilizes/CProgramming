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


int arr[500005];
vector<int> pf(1, 0);

int main()
{
    Mob;
    int n, k; cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> arr[i];
    // for(int i=1; i<=n; i++) cout << arr[i] << ' ';
    for(int i=1; i<=k; i++) pf[0] += arr[i];
    for(int i=2; i<=n-k+1; i++) pf.push_back(pf[i-2]+arr[i+k-1]-arr[i-1]);
    // for(int i=0; i<n-k+1; i++) cout << pf[i] << el;
    int mn = INTMAX;
    int idx = 0;
    for(int i=0; i<n-k+1; i++){
        if(mn>pf[i]){
            mn = pf[i];
            idx = i+1;
        }
    }
    cout << idx << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/