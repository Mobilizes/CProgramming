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


int main(){
    Mob;
    tcs(){
        string a, b, c; cin >> a >> b;
        int n = a.length(), m = b.length();
        int idxa = 0, idxb = 0;
        bool carry = 0;
        for(; idxa<n; idxa++) if(a[idxa]!='0') break;
        for(; idxb<m; idxb++) if(b[idxb]!='0') break;
        for(; n>0; n--) if(a[n-1]!='0') break;
        for(; m>0; m--) if(b[m-1]!='0') break;
        // cout << n << ' ' << m << el;
        while(idxa<n and idxb<m){
            // cout << int(a[idxa]) << ' ' << int(b[idxb]) << ' ' << carry << el;
            c += a[idxa] + b[idxb] + carry - ((a[idxa]+b[idxb]+carry)>=106 ? 58 : 48);
            if(a[idxa]+b[idxb]+carry>=106) carry = 1;
            else carry = 0;
            idxa++; idxb++;
        }
        while(idxa<n){
            if(carry){
                c += (a[idxa] + 1 == 58 ? '0' : a[idxa] + 1);
                if(a[idxa]+1==58) carry = 1;
                carry = 0;
            } else c += a[idxa];
            idxa++;
        }
        while(idxb<m){
            if(b[idxb]+carry>=58){
                c += (b[idxb] + 1 == 58 ? '0' : b[idxb] + 1);
                carry = 0;
            } else c += b[idxb];
            idxb++;
        }
        if(carry) c += '1';
        bool flag = false;
        for(int i=0; i<c.length(); i++){
            if(c[i]!='0') flag = true;
            if(flag) cout << c[i];
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