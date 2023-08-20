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
    testcases(){
        int n; cin >> n;
        int k; cin >> k;
        ll arr[n];
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        ll temp[n+1];
        for(int i=0; i<n; i++){
            temp[i+1] = temp[i] + arr[i];
        }
        for(int i=0; i<k+1; i++){
            sum = max(sum, temp[n-(k-i)] - temp[2*i]);
        }
        cout << sum << endl;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

// 10 11 12 13 15 22