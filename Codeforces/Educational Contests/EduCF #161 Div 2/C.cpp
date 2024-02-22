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
        int n; cin >> n;
        vector<ll> arr(n+2); for(int i=1; i<=n; i++) cin >> arr[i];
        vector<ll> costforward(n+2);
        vector<ll> costbackward(n+2);
        for(int i=1; i<n; i++){
            bool right = abs(arr[i]-arr[i-1]) >= abs(arr[i]-arr[i+1]);
            if(i==1) right = true;
            costforward[i] = right ? 1 : abs(arr[i]-arr[i+1]);
            costforward[i] += costforward[i-1];
        }

        for(int i=n; i>1; i--){
            bool left = abs(arr[i]-arr[i-1]) <= abs(arr[i]-arr[i+1]);
            if(i==n) left = true;
            costbackward[i] = left ? 1 : abs(arr[i]-arr[i-1]);
            costbackward[i] += costbackward[i+1];
        }
        // reverse(costbackward.begin(), costbackward.end());

        int m; cin >> m;
        for(int q=0; q<m; q++){
            ll a, b; cin >> a >> b;
            if(a<b){
                cout << costforward[b-1] - costforward[a-1] << el;
            } else{
                cout << costbackward[b+1] - costbackward[a+1] << el;
            }
        }
        // for(int i=1; i<=n; i++) cout << costforward[i] << ' ';
        // cout << el;
        // for(int i=1; i<=n; i++) cout << costbackward[i] << ' ';
        // cout << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/