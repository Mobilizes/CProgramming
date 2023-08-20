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
    int arr[n+5];
    int sortarr[n+5];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sortarr[i] = arr[i];
    }
    sort(sortarr, sortarr+n);
    int res = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=sortarr[i]) res++;
    }
    cout << (res==2 or res==0 ? "YES" : "NO") << endl;
    return 0;
}