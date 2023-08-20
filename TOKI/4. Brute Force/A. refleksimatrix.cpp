#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007

int matrix1[75][75];
int matrix2[75][75];

int main()
{
    Mob;
    int a, b; cin >> a >> b;
    for(int i=0; i<a; i++) for(int j=0; j<b; j++) cin >> matrix1[i][j];
    int c, d; cin >> c >> d;
    for(int i=0; i<c; i++) for(int j=0; j<d; j++) cin >> matrix2[i][j];

    int identik=0, horizontal=0, vertikal=0, kananbawah=0, kiribawah=0;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(matrix1[i][j]==matrix2[i][j]) identik++;
            if(matrix1[i][j]==matrix2[a-1-i][j]) horizontal++;
            if(matrix1[i][j]==matrix2[i][b-1-j]) vertikal++;
            if(matrix1[i][j]==matrix2[j][i]) kananbawah++;
            if(matrix1[i][j]==matrix2[a-1-j][b-1-i]) kiribawah++;
        }
    }
    if(identik == a*b) cout << "identik" << endl;
    else if(horizontal == a*b) cout << "horisontal" << endl;
    else if(vertikal == a*b) cout << "vertikal" << endl;
    else if(kananbawah == a*b) cout << "diagonal kanan bawah" << endl;
    else if(kiribawah == a*b) cout << "diagonal kiri bawah" << endl;
    else cout << "tidak identik" << endl;
    return 0;
}