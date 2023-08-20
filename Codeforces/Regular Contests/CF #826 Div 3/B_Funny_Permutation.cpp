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
        if(n==3)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> arr;
        for(int i=n; i>n-n/2; i--)
        {
            arr.push_back(i);
        }
        for(int i=1; i<=n/2; i++)
        {
            arr.push_back(i);
        }
        if(n & 1) arr.push_back(n/2 + 1);
        for(auto i : arr)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
	return 0;
}

/*
break the permutation array into 2 parts, bigger part will be sorted descending and the smaller part will be sorted
ascending after the bigger part.
5 4 
*/