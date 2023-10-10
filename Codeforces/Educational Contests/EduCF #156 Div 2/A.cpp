#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
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
    Mob;
    tcs(){
        double n; cin >> n;
        int a, b;
        bool flag = true;
        a = floor((n-1)/2);
        b = ceil((n-1)/2);
        if(a==b){
            a--;
            b++;
        }
        while(a%3==0 or b%3==0){
            a--;
            b++;
        }
        if(a<=1 or b<=1) flag = false;
        if(!flag) cout << "NO" << el;
        else cout << "YES\n" << 1 << ' ' << a << ' ' << b << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/