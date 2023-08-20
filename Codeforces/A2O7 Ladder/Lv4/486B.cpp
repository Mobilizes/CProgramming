#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases() int testcase; cin >> testcase; while(testcase--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main()
{
    Mob;
    int n, m; cin >> n >> m;
    int a[n][m];
    int b[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            b[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            bool rowf = true;
            bool colf = true;
            for(int k=0; k<m; k++){
                if(a[i][k]==0){
                    rowf = false;
                    break;
                }
            }
            for(int k=0; k<n; k++){
                if(a[k][j]==0){
                    rowf = false;
                    break;
                }
            }
            if(rowf and colf) b[i][j] = 1;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(b[i][j]==1){
                for(int k=0; k<n; k++) a[k][j] = 0;
                for(int k=0; k<m; k++) a[i][k] = 0;
            }
        }
    }
    bool flag = true;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) if(a[i][j]==1) flag = false;
    if(flag){
        cout << "YES" << el;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cout << b[i][j] << ' ';
            cout << el;
        }
    } else cout << "NO" << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/