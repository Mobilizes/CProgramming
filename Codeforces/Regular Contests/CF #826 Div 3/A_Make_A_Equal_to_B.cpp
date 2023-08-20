#include <bits/stdc++.h>
 
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007
 
typedef long long ll;
 
using namespace std;

int main()
{
	Mob;
	int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        map<int, int> mpa;
        map<int, int> mpb;
        int a[n+1];
        int b[n+1];
        int res1 = 0;
        int res2 = 0;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            a[i] = x;
            mpa[x]++;
        }
        for(int i=0; i<n; i++) 
        {
            int x; cin >> x;
            b[i] = x;
            mpb[x]++;
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i]) res1++;
        }

        res2 = min(abs(mpa[0]-mpb[0]), abs(mpa[1]-mpb[1])) + 1;

        cout << min(res1, res2) << endl;
    }
	return 0;
}