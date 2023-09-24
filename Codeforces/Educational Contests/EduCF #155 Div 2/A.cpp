#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main()
{
    Mob; fast_io;
    tcs(){
        int n; cin >> n;
        int str[n+1], end[n+1];
        for(int i=0; i<n; i++){
            cin >> str[i] >> end[i];
        }
        bool flag = true;
        for(int i=1; i<n; i++){
            if(str[i]<str[0]) continue;
            if(str[i]>=str[0] and end[i]>=end[0]) flag = false;
        }
        if(flag) cout << str[0] << el;
        else cout << -1 << el;
    }  
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/