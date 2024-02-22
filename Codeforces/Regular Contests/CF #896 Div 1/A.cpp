#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int idxdx=0; idxdx<n; idxdx++) arr[idxdx] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; for(int tecs=0; tecs<testcase; tecs++)
#define el "\n"

void solve(){
    int n, m; cin >> n >> m;
    int arr[n][m]; for(int i=0; i<n; i++) init(arr[i],m,-1);
    if(m==1){
        cout << 0 << el;
        for(int i=0; i<n; i++) arr[i][0] = 0;
    } else if(m>=n+1){
        cout << n+1 << el;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                arr[i][j] = (i+j) % m;
            }
        }
    } else{
        cout << m << el;
        for(int i=0; i<m-1; i++){
            for(int j=0; j<m; j++){
                arr[i][j] = (i+j) % m;
            }
        }
        for(int i=m-1; i<n; i++){
            for(int j=0; j<m; j++){
                arr[i][j] = j;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << ' ';
        }
        cout << el;
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