#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)


int main()
{
    Mob;
    int t; cin >> t;
    testcases(t){
        int n; cin >> n;
        int arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
        int res = n/2;
        for(int i=n-1; i>=n/2; i--){
            
        }
        cout << res << endl;
    }
    return 0;
}