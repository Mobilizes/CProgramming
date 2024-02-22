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
    int mxq=0, mxa=0, mxb=0;
    int q[n], a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> q[i];
        mxq = max(mxq, q[i]);
    }
    for(int i=0; i<n; i++){
        cin >> a[i];
        mxa = max(mxa, a[i]);
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
        mxb = max(mxb, b[i]);
    }
    int res = 0;
    for(int k=0; k<=mxq/mxa; k++){
        int tq[n]; for(int i=0; i<n; i++) tq[i] = q[i];
        bool flg = false;
        for(int i=0; i<n; i++){
            tq[i] -= a[i] * k;
            if(tq[i]<0) flg = true;
        }
        if(flg) break;
        int kb = INT_MAX;
        for(int i=0; i<n; i++){
            if(b[i]==0) continue;
            kb = min(kb, tq[i] / b[i]);
        }
        res = max(res, k+kb);
    }
    cout << res << el;
    
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/