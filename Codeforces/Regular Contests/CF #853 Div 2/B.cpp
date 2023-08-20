#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases() int testcase; cin >> testcase; while(testcase--)
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
    testcases(){
        int n; cin >> n;
        string s; cin >> s;
        int l = 0;
        int r = n - 1;
        int res = 0;
        bool f = false;
        while(l<=r){
            if(s[l]!=s[r]){
                f = true;
            }
            if(s[l]==s[r] and f){
                res++;
                f = false;
            }
            l++; r--;
        }
        if(f) res++;
        if(res<=1) cout << "Yes" << el;
        else cout << "No" << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/