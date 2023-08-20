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
    testcases(t){
        int n; cin >> n;
        int arr[n]; 
        bool b1 = false;
        bool b2 = false;
        cin >> arr[0];
        int res = arr[0];
        for(int i=1; i<n; i++){
            cin >> arr[i];
            res += arr[i];
            if(arr[i-1]==-1 and arr[i]==-1) b1 = true;
            if(arr[i-1]==1 and arr[i]==1) b2 = true;
        }
        if(b1) res += 4;
        else if(b2) res -= 4;
        cout << res << endl;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/