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
    int n, x, y; cin >> n >> x >> y;
    int res = 0;
    if(x>y){
        res += x * (n/y);
        n %= y;
    }
    res += n;
    cout << res << endl;
    return 0;
}