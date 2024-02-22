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
    string s; cin >> s;
    int n = s.size();
    for(int i=0; i<n; i++) s[i] -= 16;
    ll res = 1;
    for(int i=0; i<n; i++){
        res += (int(s[i])-48) * pow(26, n-i-1);
        // cout << res << endl;
    }
    if(n==1) res--;
    cout << res << endl;
    return 0;
}