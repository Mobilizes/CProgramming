#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el '\n'

int main(int argc, char const* argv[]){
    Mob;
    tcs(){
        ll a, b, r; cin >> a >> b >> r;
        ll x = 0;
        if(a<b) swap(a, b);
        bool first = true;
        for(ll i=60; i>=0; i--){
            ll pow2 = (1ll<<i);
            if(((a & pow2)==pow2) and ((b & pow2)!=pow2)){ // checks if a has bin digit of i but b doesnt
                if((x | pow2)<=r and (abs((a^(x|pow2)) - (b^(x|pow2))) < abs(a^x - b^x))){ // check if adding bin digit to x would be bigger than r and also would lower the difference
                    if(!first) x |= pow2; // if its the first time that a has bin digit of i but b doesnt, then skip it, because a > b
                }
                first = false; 
            }
        }
        cout << abs((a^x)-(b^x)) << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

// 9 1001
// 6 0110 