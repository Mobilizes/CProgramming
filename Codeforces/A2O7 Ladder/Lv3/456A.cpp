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
    pair<int, int> laptops[n];
    for(int i=0; i<n; i++) cin >> laptops[i].first >> laptops[i].second;
    sort(laptops, laptops+n);
    bool res = true;
    for(int i=0; i<n-1; i++){
        if(laptops[i].second>laptops[i+1].second){
            res = false;
            break;
        }
    }
    if(!res) cout << "Happy Alex" << endl;
    else cout << "Poor Alex" << endl;
    return 0;
}

//https://codeforces.com/problemset/problem/456/A