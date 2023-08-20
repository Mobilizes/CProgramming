#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define testcases(t) while(t--)
#define INTinf (int)(1e9)
#define LLinf (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)


int main()
{
    Mob;
    int n; cin >> n;
    int A[n]; for(int i=0; i<n; i++) cin >> A[i];
    int B[n]; for(int i=0; i<n; i++) cin >> B[i];
    int pA = 0;
    int pB = n-1;
    int pa = pA+1; int pb = pB-1;
    while(pA<=pB){
        if(A[pa]==B[pa]){
            for(int i=pa; i>=pA; i--) A[i] = A[pa];
            pA++;
            pa = pA+1;
        }
        if(A[pb]==B[pb]){
            for(int i=pb; i<=pB; i++) A[i] = B[pb];
            pB--;
            pb = pB-1;
        }
        if()
    }
    bool possible = true;
    for(int i=0; i<n; i++){
        if(A[i]!=B[i]){
            possible = false;
            break;
        }
    }
    cout << (possible? "YES" : "NO") << endl;
    return 0;
}