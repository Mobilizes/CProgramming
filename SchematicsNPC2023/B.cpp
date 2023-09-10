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


vector<double> arr(55, 0);
int n;

double rec(int idx, int i){
    if(i==1000) return 0;
    if(idx==n) return rec(0, i);
    return arr[idx] + 1/rec(idx+1, i+1);
}

int main()
{
    Mob;
    tcs(){
        cin >> n;
        for(int i=0; i<n; i++) cin >> arr[i];
        double res = rec(0, 0);
        cout << setprecision(7) << res << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/