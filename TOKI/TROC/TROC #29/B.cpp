#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)


int main()
{
    Mob;
    int n; cin >> n;
    int a[n], b[n];
    bool whitetile = false;
    bool blacktile = false;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
        if((a[i]+b[i])&1) whitetile = true;
        else blacktile = true;
    }
    if(whitetile and blacktile) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}