#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 

int main()
{
    Mob;
    int t; cin >> t;
    while(t--){{
        string s; cin >> s;
        cout << int(s[0]) + int(s[2]) - 96 << endl;
    }}
    return 0;
}