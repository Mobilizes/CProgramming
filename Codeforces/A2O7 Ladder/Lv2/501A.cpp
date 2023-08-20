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
    int a, b, c, d; cin >> a >> b >> c >> d;
    int Misha = max((3*a)/10, a-((a/250)*c));
    int Vasya = max((3*b)/10, b-((b/250)*d));
    if(Misha>Vasya) cout << "Misha" << endl;
    if(Misha<Vasya) cout << "Vasya" << endl;
    if(Misha==Vasya) cout << "Tie" << endl;
    return 0;
}

// https://codeforces.com/problemset/problem/501/A