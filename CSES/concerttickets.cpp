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
    int n, m; cin >> n >> m;
    set<array<int, 2>> h;
    for(int i=0; i<n; i++){
        int hi; cin >> hi;
        h.insert({hi, i});
    }
    for(int i=0; i++<m;){
        int t; cin >> t;
        auto itr = h.lower_bound({t+1, 0});
        if(itr==h.begin()){
            cout << -1 << el;
            continue;
        }
        itr--;
        cout << (*itr)[0] << el;
        h.erase(itr);
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/