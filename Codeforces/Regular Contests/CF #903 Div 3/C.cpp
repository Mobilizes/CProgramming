#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve(){
    int n; cin >> n;
    char arr[n][n]; for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> arr[i][j];
    int res = 0;
    for(int i=0; i<n/2; i++){
        for(int j=i; j<n-i-1; j++){
            char q1=arr[i][j], q2=arr[n-1-j][i], q3=arr[n-1-i][n-1-j], q4=arr[j][n-1-i];
            char mxchar = max({q1, q2, q3, q4});
            res += abs(q1-mxchar) + abs(q2-mxchar) + abs(q3-mxchar) + abs(q4-mxchar);
        }
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