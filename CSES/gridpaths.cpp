#include <bits/stdc++.h>

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007

typedef long long ll;

using namespace std;

int n;
char arr[1005][1005];
ll memo[1005][1005];
bool doneit[1005][1005];

ll move(int x, int y)
{
	if(doneit[x][y]) return memo[x][y];
	doneit[x][y] = true;
	if(x==n-1 and y==n-1) memo[x][y]++;
	else if(x==n or y==n or arr[x][y]=='*') memo[x][y] = 0;
	else memo[x][y] = (move(x+1, y) + move(x, y+1)) % mod;
	return memo[x][y];
}

int main()
{
	Mob;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> arr[i][j];
		}
	}
	if(arr[n-1][n-1]=='*') 
	{
		cout << 0;
		return 0;
	}
	cout << move(0, 0);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << memo[i][j];
		}
		cout << endl;
	}
	return 0;
}