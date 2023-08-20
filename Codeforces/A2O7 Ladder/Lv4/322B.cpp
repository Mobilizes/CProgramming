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
    int r, g, b; cin >> r >> g >> b;
    int res = 0;
    for(int i=0; i<3; i++){
        int temp = i;
        if(r-i<0 or g-i<0 or b-i<0) break;
        int tr = r-i, tg = g-i, tb = b-i;
        temp += tr/3; temp += tg/3; temp += tb/3;
        res = max(res, temp);
    }
    cout << res << endl;
    return 0;
}

// codeforces.com/problemset/problem/322/B