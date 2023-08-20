#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define INTinf 1e9
#define LLinf 1e18
#define mod 1000000007

int n, m, k;
int petak[101][101];

int cekAtas(int x, int y){
    if(x - 1 < 0) return 1;
    return petak[x-1][y];
}

int cekBawah(int x, int y){
    if(x + 1 > n - 1) return 1;
    return petak[x+1][y];
}

int cekKiri(int x, int y){
    if(y - 1 < 0) return 1;
    return petak[x][y-1];
}

int cekKanan(int x, int y){
    if(y + 1 > m - 1) return 1;
    return petak[x][y+1];
}

int main()
{
    Mob;
    cin >> n >> m >> k;
    // Input petak-petak ke dalam nested array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> petak[i][j];
        }
    }
    // Mengecek masing-masing nilai dalam nested array jika ditemukan index yang memenuhi syarat menarik
    int ti = INTinf, tj = INTinf;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int kemenarikan = cekAtas(i, j) * cekBawah(i, j) * cekKiri(i, j) * cekKanan(i, j);
            if(kemenarikan == k){
                if(j < tj){
                    ti = i;
                    tj = j;
                } else if(j == tj){
                    if(i < ti){
                        ti = i;
                        tj = j;
                    }
                }
            }
        }
    }
    // Jika ti dan tj masih bernilai INTinf, maka jawaban tidak ditemukan
    if(ti==INTinf and tj==INTinf) cout << "0 0" << endl;
    else cout << ti + 1 << ' ' << tj + 1 << endl;
    return 0;
}