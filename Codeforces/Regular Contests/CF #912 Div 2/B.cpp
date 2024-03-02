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
    int arr[n][n]; for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> arr[i][j];
    int res[n]; init(res,n,(1<<30)-1);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            res[i] &= arr[j][i];
            // cout << res[i] << ' ';
        }
        // cout << el;
    }
    bool flag = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                continue;
            }
            if((res[i]|res[j])!=arr[i][j]) flag = false;
        }
    }
    if(flag){
        cout << "YES" << el;
        for(int i=0; i<n; i++) cout << res[i] << ' ';
        cout << el;
    } else cout << "NO" << el;
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