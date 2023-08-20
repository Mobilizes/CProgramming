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
        ll t1, t2, t3, t4; cin >> t1 >> t2 >> t3 >> t4;
        if(t1==0) cout << 1 << endl;
        else cout << t1 + 2*min(t2, t3) + min(t1 + 1, abs(t2 - t3) + t4) << endl;
    }
    return 0;
}