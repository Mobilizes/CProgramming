#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int exp(int a, int b){
    if(b==0) return 1;
    return exp(a, b-1) * a;
}


int main()
{
    Mob;
    int n; cin >> n;
    int pow2 = exp(2, n);
    string s = "0000000000000000";
    int memory[16];
    for(int i=0; i<16; i++){
        memory[i] = exp(2, i)-1;
    }
    for(int i=0; i<pow2; i++){
        for(int j=0; j<16; j++){
            memory[j]++;
            memory[j] %= exp(2,j+1);
            if(memory[j]==0){
                if(s[j]=='1') s[j] = '0';
                else s[j] = '1';
            }
        }
        for(int j=n-1; j>=0; j--){
            cout << s[j];
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