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
    ll arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++) arr[i] %= 3;
    sort(arr, arr+n);
    ll sum = 0;
    for(int i=0; i<n; i++) sum += arr[i];
    if(sum%3==2){
        cout << 1 << el;
    } else if(sum%3==0){
        cout << 0 << el;
    } else{
        int idx = 0;
        while(arr[idx]==0) idx++;
        if(arr[idx]==1) cout << 1 << el;
        else cout << 2 << el;
    }
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