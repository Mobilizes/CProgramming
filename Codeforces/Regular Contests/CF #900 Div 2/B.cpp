#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main()
{
    Mob;
    tcs(){
        int n; cin >> n;
        int arr[51][51];
        for(int i=0; i<n; i++){
            cin >> arr[i][0];
            for(int j=1; j<=arr[i][0]; j++) cin >> arr[i][j];
        }
        vector<bool> fullset(51, 0);
        int fulllength = 0;
        for(int i=0; i<n; i++){
            for(int j=1; j<=arr[i][0]; j++){
                if(!fullset[arr[i][j]]) fulllength++;
                fullset[arr[i][j]] = true;
            }
        }
        int mx = 0;
        for(int k=0; k<n; k++){
            vector<bool> currset(51, 0);
            int currlength = 0;
            for(int i=0; i<n; i++){
                if(i==k) continue;
                for(int j=1; j<=arr[i][0]; j++){
                    if(!currset[arr[i][j]]) currlength++;
                    currset[arr[i][j]] = true;
                }
            }
            cout << fulllength << ' ' << currlength << el;
            if(fulllength>currlength) mx = max(mx, currlength);
        }
        cout << mx << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/