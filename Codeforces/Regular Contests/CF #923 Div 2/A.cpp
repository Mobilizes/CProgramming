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
        int n; cin >> n;
        string s; cin >> s;
        int fi = -1;
        int se = 0;
        for(int i=0; i<n; i++){
            if(fi==-1){
                if(s[i]=='B') fi = i;
            }
            if(s[i]=='B') se = i;
        }
        cout << se - fi + 1 << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/