#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"


int main(int argc, char const* argv[]){
    Mob;
    int n, k; cin >> n >> k;
    string s; cin >> s;
    if(k==2){
        string a = "", b = "";
        for(int i=0; i<n; i++){
            if(i&1){
                a += 'A';
                b += 'B';
            } else{
                a += 'B';
                b += 'A';
            }
        }
        int diffa = 0, diffb = 0;
        for(int i=0; i<n; i++) diffa += s[i]!=a[i];
        for(int i=0; i<n; i++) diffb += s[i]!=b[i];
        if(diffa<=diffb) cout << diffa << el << a << el;
        else cout << diffb << el << b << el;
        return 0;
    }
    int res = 0;
    for(int i=1; i<n; i+=2){
        bool flag = false;
        while(s[i]==s[i-1] || s[i]==s[i+1]){
            flag = true;
            s[i]++;
            if(s[i]=='A'+k) s[i] = 'A';
        }
        res += flag;
    }
    cout << res << el << s << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/