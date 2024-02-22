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
    tcs(){
        int n, k; cin >> n >> k;
        int total = n*4-2;
        if(k<=total-2){
            cout << (k+1)/2;
        }
        else if(k==total-1) cout << 2*n-1;
        else cout << 2*n;
        cout << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/