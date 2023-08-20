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
#define el '\n'


int sod(int n){
    int res = 0;
    while(n>0){
        res += n%10;
        n /= 10;
    }
    return res;
}


int main()
{
    Mob;
    testcases(t){
        int n; cin >> n;
        string s = to_string(n);
        int a=0, b=0;
        int curpow = 1;
        for(int i=1; i<s.length(); i++) curpow *= 10;
        bool alt = false;
        for(int i=0; i<s.length(); i++){
            if((s[i]-'0')%2==0){
                a += (s[i]-'0')/2 * curpow;
                b += (s[i]-'0')/2 * curpow;
            } else{
                if(alt){
                    b += ((s[i]-'0')+1)/2 * curpow;
                    a += ((s[i]-'0')-1)/2 * curpow;
                } else{
                    a += ((s[i]-'0')+1)/2 * curpow;
                    b += ((s[i]-'0')-1)/2 * curpow;
                }
                alt = not alt;
            }
            curpow /= 10;
        }
        cout << a << ' ' << b << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/