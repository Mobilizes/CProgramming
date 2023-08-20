#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 

int main()
{
    Mob;
    int t; cin >> t;
    while(t--){
        int small = INTinf;
        int big = 0;
        int smalli, smallj;
        int bigi, bigj;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                int x; cin >> x;
                if(x<small){
                    small = x;
                    smalli = i;
                    smallj = j;
                }
                if(x>big){
                    big = x;
                    bigi = i;
                    bigj = j;
                }
            }
        }
        if((smalli==bigj and smallj==bigi) or (abs(bigi-smalli)==1 and abs(bigj-smallj)==1)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

/*
0 0, 2 2
2 2, 0 0
*/