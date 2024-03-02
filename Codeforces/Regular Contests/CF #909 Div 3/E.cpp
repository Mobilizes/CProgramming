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
    int arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
    int bar = INT_MAX;
    int idx = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < bar){
            bar = arr[i];
            idx = i;
        }
    }
    bool flag = true;
    for(int i=idx+1; i<n; i++){
        if(arr[i]<arr[i-1]) flag = false;
    }
    if(flag) cout << idx << el;
    else cout << -1 << el;
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