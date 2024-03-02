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
    sort(arr, arr+n);
    if(arr[0]==arr[1]){
        bool flag = false;
        for(int i=2; i<n; i++){
            if((arr[i] % arr[0]) > 0 && (arr[i] % arr[0]) < arr[0]){
                cout << "YES" << el;
                flag = true;
                break;
            }
        }
        if(!flag) cout << "NO" << el;
    } else{
        cout << "YES" << el;
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