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
        ll n; cin >> n;
        vector<ll> vec(n); for(int i=0; i<n; i++) cin >> vec[i];
        ll sum = 0;
        for(int i=0; i<n; i++) sum += vec[i];
        ll carry = 0;
        ll target = sum / n;
        bool flag = true;
        for(int i=0; i<n; i++){
            if(vec[i]>target){
                carry += vec[i] - target;
            } else{
                carry -= target - vec[i];
                if(carry<0){
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout << "YES" << el;
        else cout << "NO" << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/