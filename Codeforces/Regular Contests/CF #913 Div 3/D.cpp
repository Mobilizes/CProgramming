#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

int n;
vector<int> a, b;
vector<int> req;

bool possible(int d){
    int l = 0, r = 0;
    for(int i=0; i<n; i++){
        l = max(l - d, a[i]);
        r = min(r + d, b[i]);
        if(l>r) return false;
    }
    return true;
}

void solve(){
    cin >> n;
    a.resize(n);
    b.resize(n);
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];
    int l=0, r=1000000001;
    while(l<r){
        int m = l+(r-l)/2;
        if(possible(m)) r = m;
        else l = m+1;
    }
    cout << l << el;
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