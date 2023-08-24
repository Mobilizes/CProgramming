#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define Mob ios_base::sync_with_stdio(false)
#define lcm(a, b) (a*b / __gcd(a, b))
#define tcs() int testcase; cin >> testcase; while(testcase--)
#define INTMAX (int)(1e9)
#define LLMAX (ll)(1e18)
#define mod int(1e9+7)
#define pymod(a,b) ((b + (a%b)) % b)
#define fi first
#define se second
#define el '\n'


int main()
{
    Mob;
    ll n, a, b; cin >> n >> a >> b;
    ll kpk = lcm(a, b);
    ll l=1, r=1e18, m, res;
    while(l<=r){
        m = (l+r)/2;
        ll t = m/a + m/b - m/kpk;
        if(t>=n){
            r = m-1;
            res = m;
        } else l = m+1;
    }
    cout << res << el;
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Deskripsi
Apakah kalian masih ingat dengan PR Budi beberapa waktu yang lalu? Pada PR tersebut, Budi mendapat tiga bilangan bulat, N, A, dan B, dan harus menuliskan secara terurut menaik, semua bilangan bulat positif yang habis dibagi oleh A atau B dan tidak lebih besar dari N. Kali ini, anda justru tertarik dengan hal yang berbeda.

 

Anda memiliki tiga bilangan bulat, N, A, dan B. Seandainya anda menulis semua bilangan bulat positif yang habis dibagi A atau B, setelah diurutkan, berapakah bilangan yang berada di urutan ke-N pada barisan itu?

Format Masukan
Satu baris berisi tiga buah bilangan bulat N, A, dan B.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, bilangan pada urutan ke-N.

Contoh Masukan
6 3 4
Contoh Keluaran
12
Penjelasan
Barisan bilangan yang akan terbentuk adalah 3, 4, 6, 8, 9, 12, 15, 16,... . Bilangan yang berada pada urutan ke-6 adalah 12.

Batasan
1 ≤ N ≤ 109
1 ≤ A, B ≤ 105
*/