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


int main()
{
    Mob;
    int m, t, r; cin >> m >> t >> r;
    vector<int> pos(305);
    vector<bool> vec(305, false);
    for(int i=0; i<m; i++) {
        cin >> pos[i];
    }
    int res = 0;
    for(int i=0; i<m; i++){
        if(vec[pos[i]]) continue;
        for(int j=pos[i]; j<=pos[i]+t; j++){
            if(j-r<0) break;
            vec[j] = true;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=pos[i]-r; j<pos[i]; j++){
            if(j<0) break;
            vec[j] = false;
            res++;
        }
    }
    // for(int i=0; i<=305; i++) cout << vec[i] << "\n";
    for(int i=0; i<m; i++){
        if(!vec[pos[i]]) res = 0;
    }
    if(r>t) res = 0;
    cout << (res==0?-1:res) << "\n";
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/