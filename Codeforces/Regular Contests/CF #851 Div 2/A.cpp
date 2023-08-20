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
        vector<pair<int, int>> vec;
        for(int i=1; i<=n; i++){
            int x; cin >> x;
            if(x==2) vec.push_back(make_pair(x, i));
        }
        if(vec.size()&1) cout << -1 << el;
        else{
            if(vec.size()) cout << vec[vec.size()/2-1].se << el;
            else cout << 1 << el;
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/