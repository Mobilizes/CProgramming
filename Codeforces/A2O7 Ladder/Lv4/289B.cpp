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
    int n, m, d; cin >> n >> m >> d;
    n *= m;
    int arr[n];
    int md = 0;
    bool flag = true;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i==0) md = arr[i] % d;
        if(arr[i]%d!=md) flag = false;
    }
    if(!flag){
        cout << -1 << el;
        return 0;
    }
    sort(arr, arr+n);
    int med = arr[n/2];
    int res = 0;
    for(int i=0; i<n; i++){
        res += (abs(med-arr[i]))/d;
    }
    cout << res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/