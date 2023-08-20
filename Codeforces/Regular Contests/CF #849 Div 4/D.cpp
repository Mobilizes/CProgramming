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
#define eL '\n'


int main()
{
    Mob;
    testcases(t){
        int n; cin >> n;
        string s; cin >> s;
        int res = 0;
        vector<int> a(26, 0), b(26, 0);
        for(int i=0; i<n; i++) a[s[i]-'a']++;
        for(int i=0; i<n; i++){
            a[s[i]-'a']--;
            b[s[i]-'a']++;
            int temp = 0;
            for(int i=0; i<26; i++){
                temp += min(1, a[i]) + min(1, b[i]);
            }
            res = max(temp, res);
        }
        cout << res << eL;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

// paiumoment
// 1 + 8
// 2 + 7
// 3 + 6
// 4 + 5
// 5 + 5
// 6 + 4