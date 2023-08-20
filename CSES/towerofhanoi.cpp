#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


void solve(int a, int b, int c, int n){
    if(n==0) return;
    solve(a, c, b, n-1);
    cout << a << ' ' << c << el;
    solve(b, a, c, n-1);
}

int main()
{
    Mob;
    int n; cin >> n;
    cout << (1<<n) - 1 << el;
    solve(1, 2, 3, n);
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/