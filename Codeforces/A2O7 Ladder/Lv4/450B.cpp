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

int main(){
    Mob;
    int x, y; cin >> x >> y;
    int n; cin >> n;
    int combinations[6] = {x, y, y-x, -x, -y, x-y};
    int res = combinations[(n-1)%6];
    cout << pymod(res,mod) << endl;
    return 0;
}

// https://codeforces.com/problemset/problem/450/B