#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve(){
    string s; cin >> s;
    int n = 4;
    char c = '1';
    int res = 0;
    for(int i=0; i<n; i++){
        while(c!=s[i]){
            if(c=='0'){
                c = '9';
                res++;
                continue;
            }
            if(s[i]=='0'){
                c++;
                if(c>'9') c = '0';
                res++;
                continue;
            }
            if(c<s[i]) c++;
            else c--;
            res++;
        }
        res++;
    }
    cout << res << el;
}

int main(int argc, char const* argv[]){
    Mob;
    tcs() solve();
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/