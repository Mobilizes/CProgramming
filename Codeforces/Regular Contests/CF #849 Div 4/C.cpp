#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) int t; cin >> t; while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main()
{
    Mob;
    testcases(t){
        int n; cin >> n;
        string s; cin >> s;
        int res = n;
        for(int i=0, j=n-1; i<j; i++, j--){
            if((s[i]=='1' and s[j]=='0') or (s[i]=='0' and s[j]=='1')) res -= 2;
            else break;
        }
        cout << res << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/