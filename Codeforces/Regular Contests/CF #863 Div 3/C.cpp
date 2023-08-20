#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
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
    tcs(){
        int n; cin >> n;
        vector<int> b(n-1), a;
        for(int i=0; i<n-1; i++) cin >> b[i];
        a.push_back(b[0]);
        for(int i=0; i<n-2; i++){
            a.push_back(min(b[i], b[i+1]));
        }
        a.push_back(b[n-2]);
        for(int i=0; i<n; i++) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/