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


int digitSum(int x){
    if(x<10) return x;
    int res = 0;
    while(x>0){
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main()
{
    Mob;
    testcases(t){
        int n, q; cin >> n >> q;
        vector<int> vec(n+3);
        for(int i=1; i<=n; i++) cin >> vec[i];
        for(int i=0; i<q; i++){
            int z; cin >> z;
            if(z==1){
                int l, r; cin >> l >> r;
                for(l; l<=r; l++){
                    vec[l] = digitSum(vec[l]);
                }
            } else if(z==2){
                int x; cin >> x;
                cout << vec[x] << ' ';
            }
        }
        cout << eL;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
1
200000 10

1 1 5
2 1
2 2
2 3 
2 4
2 5
*/