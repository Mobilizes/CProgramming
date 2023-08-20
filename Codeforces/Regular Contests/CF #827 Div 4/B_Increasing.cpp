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
        vector<int> vec;
        map<int, int> mp;
        bool possible = true;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            if(mp[x]==0)
            {
                vec.push_back(x);
            }
            mp[x]++;
        }
        for(auto i : vec)
        {
            if(mp[i]>1)
            {
                possible = false;
                break;
            }
        }
        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}