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
        int one = 0, zero = 0;
        for(int i=0; i<n; i++) if(s[i]=='0') zero++; else one++;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                if(one<=0) break;
                one--;
            } else{
                if(zero<=0) break;
                zero--;
            }
        }
        cout << zero+one << el;
    }
    return 0;
}

// 111100
// 001111

// 101110
// 010111

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/