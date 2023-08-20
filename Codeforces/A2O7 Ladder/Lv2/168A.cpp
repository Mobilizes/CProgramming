#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define inf 1e9+7
#define fi first
#define se second

typedef long long ll;

using namespace std;

int main()
{
    Mob;
    double n, x, y; cin >> n >> x >> y;
    n = ceil(n * y / 100);
    cout << max(0, int(n - x)) << endl;
    return 0;
}

// https://codeforces.com/problemset/problem/168/A