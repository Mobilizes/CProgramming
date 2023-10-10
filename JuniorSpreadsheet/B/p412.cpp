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


double n;
int arr[55];

int main()
{
    Mob;
    while(cin >> n){
        if(n==0) break;
        for(int i=0; i<n; i++) cin >> arr[i];
        double f1 = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(arr[i], arr[j])==1) f1++;
            }
        }
        if(f1) cout << setprecision(10) << sqrt((double)(n*(n-1)/2) * (double)(6) / f1) << el;
        else cout << "No estimate for this data set." << el;
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

