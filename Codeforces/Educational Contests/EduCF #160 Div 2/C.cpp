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
    int n; cin >> n;
    int arr[33]; init(arr,33,0);
    for(int tsc=0; tsc<n; tsc++){
        int t, v; cin >> t >> v;
        if(t==1){
            arr[v]++;
            continue;
        }
        for(int i=29; i>=0; i--){
            int tk = min(v >> i, arr[i]);
            v -= tk << i;
        }
        if(v==0) cout << "YES" << el;
        else cout << "NO" << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/