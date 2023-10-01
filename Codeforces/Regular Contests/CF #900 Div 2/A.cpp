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
        int n; cin >> n;
        int a[101]; for(int i=0; i<n; i++) cin >> a[i];
        int b[101];
        b[0] = 1;
        if(a[0]==1) b[0] = 2;
        for(int i=1; i<n; i++){
            if(b[i-1]+1==a[i]) b[i] = b[i-1] + 2;
            else b[i] = b[i-1]+1;
        }
        cout << el << b[n-1] << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/