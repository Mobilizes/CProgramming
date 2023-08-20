#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define forinc(a,b,c) for(ll a = b; a < c; a++)
#define fordec(a,b,c) for(ll a = b; a >= c; a--)
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod 1000000007


int main()
{
    Mob;
    int n; cin >> n;
    double arr[n+1];
    forinc(i,0,n){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    if(n&1) cout << fixed << setprecision(1) << arr[n/2] << endl;
    else cout << fixed << setprecision(1) << (arr[n/2-1] + arr[n/2])/2 << endl;
    return 0;
}