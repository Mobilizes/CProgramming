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
    string s; cin >> s;
    int n = s.length();
    int res['z'+1]; init(res, 'z'+1, 0);
    for(int i=0; i<n; i++) res[s[i]]++;
    int odd = 0;
    for(int i='a'; i<='z'; i++) if(res[i]&1) odd++;
    if((odd==0) || (odd&1)) cout << "First" << el;
    else cout << "Second" << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/