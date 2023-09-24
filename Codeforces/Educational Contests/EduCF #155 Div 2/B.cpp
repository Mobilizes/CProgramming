#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
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
        int n; cin >> n;
        ll totalcol=0, totalrow=0;
        ll mincol = LLMAX, minrow = LLMAX;
        for(int i=0; i<n; i++){
            ll col; cin >> col;
            totalcol += col;
            mincol = min(mincol, col);
        }
        for(int i=0; i<n; i++){
            ll row; cin >> row;
            totalrow += row;
            minrow = min(minrow, row);
        }
        cout << min({mincol * n + totalrow, minrow * n + totalcol, totalrow + totalcol}) << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/