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
		int arr[n+2];
		for(int i=0; i<n; i++) cin >> arr[i];
		for(int i=0; i<n; i++)
		{
			int ins; cin >> ins;
			string s; cin >> s;
			for(int j=0; j<ins; j++)
			{
				if(s[j]=='U')
				{
					arr[i]--;
					if(arr[i]<0) arr[i] = 9;
				} else if(s[j]=='D')
				{
					arr[i]++;
					if(arr[i]>9) arr[i] = 0;
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}