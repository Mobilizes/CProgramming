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
    int n; cin >> n;
    string s; cin >> s;
    for(int j=1; j<=n-1; j++){
        int l = 0;
        for(int i=0; i+j<n; i++){
            if(s[i]!=s[i+j]) l++;
            else break;
        }
        cout << l << endl;
    }
    return 0;
}