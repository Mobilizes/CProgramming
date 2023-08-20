#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)


int main()
{
    Mob;
    int a, b, c, d, e, f; 
    cin >> a >> b >> c >> d >> e >> f;
    int x, y, z;
    x = abs(a-d);
    y = abs(b-e);
    z = abs(c-f);
    cout << (x%2 == y%2 and y%2 == z%2 ? 0 : 1) << endl;
    return 0;
}