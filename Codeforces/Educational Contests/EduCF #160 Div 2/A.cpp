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
        string s; cin >> s;
        int n = s.length();
        if(n==2){
            if(s[0]<s[1]) cout << s[0] << ' ' << s[1] << el;
            else cout << -1 << el;
            continue;
        }
        bool flag = true;
        for(int i=1; i<n; i++){
            if(s[i]=='0') continue;
            string a = s.substr(0, i);
            string b = s.substr(i, n-i);
            int na = stoi(a);
            int nb = stoi(b);
            if(na>=nb) continue;
            cout << a << ' ' << b << el;
            flag = false;
            break;
        }
        if(flag) cout << -1 << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/