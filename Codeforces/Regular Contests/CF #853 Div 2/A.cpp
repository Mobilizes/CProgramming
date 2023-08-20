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
        int arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
        bool preflag = false;
        int res = arr[0];
        for(int i=1; i<n; i++){
            res = __gcd(res, arr[i]);
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(__gcd(arr[i], arr[j])<=2) preflag = true;
            }
        }
        if(preflag and res<=n) cout << "Yes" << el;
        else cout << "No" << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/