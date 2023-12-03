#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


double pyt(double a, double b){
    return sqrt(a*a+b*b);
}

int main()
{
    Mob;
    tcs(){
        double px, py, ax, ay, bx, by;
        cin >> px >> py;
        cin >> ax >> ay;
        cin >> bx >> by;
        double pa = pyt(ax-px, ay-py), oa = pyt(ax, ay);
        double pb = pyt(bx-px, by-py), ob = pyt(bx, by);
        double ab = pyt(ax-bx, ay-by);
        double ans = 1e9;
        ans = min(ans, max(pa, oa));
        ans = min(ans, max(pb, ob));
        ans = min(ans, max({ab/2, pa, ob}));
        ans = min(ans, max({ab/2, pb, oa}));
        cout << setprecision(10) << fixed << ans << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

// 1. A or B must touch P and O
// 2. Three answers, A big enough to touch P and O, B big enough to touch P and O,
//    and A and B big enough to touch each other and P and O touched by one of them
// 3. Pick the minimum between these three.