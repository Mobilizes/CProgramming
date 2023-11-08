#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false); cin.tie(NULL);
#define init(arr,n,x) for(int i=0; i<n; i++) arr[i] = x;
#define lcm(a,b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main(){
    Mob;
    tcs(){
        int n; cin >> n;
        int a[n+1]; for(int i=0; i<n; i++) cin >> a[i];
        int b[n+1]; init(b,n,1);
        int dict[101]; init(dict,101,0);
        bool flag = false;
        int prerequisite = 0;
        int memory;
        for(int i=0; i<n; i++) dict[a[i]]++;
        for(int i=0; i<n; i++){
            if(prerequisite==2) break;
            if(prerequisite==1 and dict[a[i]]!=memory and dict[a[i]]>=2){
                if(flag){
                    prerequisite++;
                    b[i] = 3;
                    flag = false;
                } else flag = true;
            }
            if(prerequisite==0 and dict[a[i]]>=2){
                if(flag){
                    prerequisite++;
                    b[i] = 2;
                    flag = false;
                    memory = a[i];
                } else flag = true;
            }
        }
        int unique = 0;
        for(int i=0; i<101; i++) if(dict[i]>=2) unique++;
        // cout << unique << el;
        if(unique>=2) for(int i=0; i<n; i++) cout << b[i] << ' ';
        else cout << -1;
        cout << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/