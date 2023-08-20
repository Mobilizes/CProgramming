#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


vector<vector<ll>> arr(105, vector<ll>(105, 0));

int main()
{
    Mob;
    int r, c; cin >> r >> c;
    ll res = -INTMAX;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cin >> arr[i][j];
            arr[i][j] += arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
        }
    }
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            
        }
    }
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout << arr[i][j] << ' ';
        }
        cout << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/