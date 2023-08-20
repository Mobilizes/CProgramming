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
    int n; cin >> n;
    int a[n], b[n];
    int suma=0, sumb=0;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
        suma+=a[i];
        sumb+=b[i];
    }
    if(suma%2==0 and sumb%2==0) cout << 0 << endl;
    else if(suma%2!=sumb%2) cout << -1 << endl;
    else{
        bool possible = false;
        for(int i=0; i<n; i++){
            if(a[i]%2!=b[i]%2){
                possible = true;
                break;
            }
        }
        if(possible) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/