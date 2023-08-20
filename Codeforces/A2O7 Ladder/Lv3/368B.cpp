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
    int n, m; cin >> n >> m;
    int arr[n+5];
    for(int i=1; i<=n; i++) cin >> arr[i];
    int val[n+5];
    map<int, bool> mp;
    val[n+1] = 0;
    for(int i=n; i>=1; i--){
        val[i] = val[i+1];
        if(!mp[arr[i]]) val[i]++;
        mp[arr[i]] = true;
    }
    for(int i=0; i<m; i++){
        int idx; cin >> idx;
        cout << val[idx] << endl;
    }
    return 0;
}

// https://codeforces.com/problemset/problem/368/B