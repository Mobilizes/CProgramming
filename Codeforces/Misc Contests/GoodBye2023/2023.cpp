#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main(){
    Mob;
    tcs(){
        int n, k; cin >> n >> k;
        ll curr = 1;
        for(int i=0; i<n; i++){
            ll x; cin >> x;
            if(curr<=2023) curr *= x;
        }
        if(2023 % curr != 0 || curr > 2023) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << 2023 / curr << ' ';
            for(int i=0; i<k-1; i++) cout << "1 ";
            cout << "\n";
        }
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/