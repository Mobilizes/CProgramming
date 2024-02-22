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

int main()
{
    Mob;
    tcs(){
        auto dist = [](double x1, double y1, double x2, double y2){
            return hypot(x1-x2, y1-y2);
        };
        double px, py, ax, ay, bx, by;
        cin >> px >> py;
        cin >> ax >> ay;
        cin >> bx >> by;
        double pa = dist(px, py, ax, ay), pb = dist(px, py, bx, by);
        double oa = dist(0, 0, ax, ay), ob = dist(0, 0, bx, by);
        double ab = dist(ax, ay, bx, by);
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