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
    for(int i=1; i<=5; i++){
        cout << (i^(6-i)) << endl;
    }
    return 0;
}