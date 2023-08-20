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
        char arr[8][8];
        char stripe;
        bool foundstripe = false;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin >> arr[i][j];
            }
        }
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(arr[i][j]!=arr[i][0])
                {
                    foundstripe = false;
                    break;
                } else 
                {
                    foundstripe = true;
                }
            }
            if(foundstripe and arr[i][0]!='.') 
            {
                stripe = arr[i][0];
            }
        }
        if(!foundstripe)
        {
            for(int i=0; i<8; i++)
            {
                for(int j=0; j<8; j++)
                {
                    if(arr[j][i]!=arr[0][i])
                    {
                        foundstripe = false;
                        break;
                    } else 
                    {
                        foundstripe = true;
                    }
                }
                if(foundstripe and arr[i][0]!='.') 
                {
                    stripe = arr[0][i];
                }
            }
        }
        cout << stripe << endl;
    }
	return 0;
}