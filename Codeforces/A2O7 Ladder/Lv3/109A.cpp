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
    ll n; cin >> n;
    ll svn = n/7;
    ll four = (n - 7*svn) / 4;
    while(7*svn + 4*four != n){
        if(svn == -1) break;
        svn--;
        four = (n - 7*svn) / 4;
    }
    if(svn==-1){
        cout << "-1" << el;
        return 0;
    }
    string res;
    for(int i=0; i<four; i++) res += '4';
    for(int i=0; i<svn; i++) res += '7';
    cout << res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/