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


int main(){
    Mob;
    int n; cin >> n;
    pair<int, int> arr[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i].fi >> arr[i].se;
    }
    sort(arr, arr+n);
    int res = 0;
    int localres = 0;
    int idx = 0;
    for(int i=0; i<n; i++){
        if(arr[idx].se<arr[i].fi){
            idx = i;
            res = max(localres, res);
            localres = 1;
        } else localres++;
    }
    res = max(localres, res);
    cout << res << el;
    return 0;
}

/*
2 4
3 9
5 8
*/

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/