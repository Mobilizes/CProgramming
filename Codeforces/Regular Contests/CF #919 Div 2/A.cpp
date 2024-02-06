#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
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
        int n; cin >> n;
        vector<int> greaterthan;
        vector<int> lessthan;
        vector<int> notequal;
        for(int i=0; i<n; i++){
            int a, x; cin >> a >> x;
            if(a==1) greaterthan.push_back(x);
            if(a==2) lessthan.push_back(x);
            if(a==3) notequal.push_back(x);
        }
        sort(greaterthan.begin(), greaterthan.end());
        sort(lessthan.begin(), lessthan.end());
        int a = greaterthan.back();
        int b = lessthan.front();
        int res = max(0, b - a + 1);
        for(int i : notequal){
            if(i<=b && i>=a) res--;
        }
        cout << res << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/