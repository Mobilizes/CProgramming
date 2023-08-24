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
    int n, q; cin >> n >> q;
    vector<int> vec(n+1);
    for(int i=1; i<=n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    for(int i=1; i<=q; i++){
        int idx; cin >> idx;
        printf("%d\n", vec[idx]);
    }
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Deskripsi
Pak Chanek baru saja mendapatkan N badak baru. Badak-badak tersebut memiliki panjang cula yang bisa saja sama, dan badak ke-i memiliki cula dengan panjang Pi. Pak Chanek sekarang memiliki beberapa pertanyaan dengan bentuk yang sama: Jika badak-badak tersebut diurutkan berdasarkan panjang culanya, dari terpendek ke terpanjang, maka berapa panjang cula badak yang berada di urutan ke-X? Bantulah Pak Chanek menjawab pertanyaan-pertanyaan tersebut!

Format Masukan
Baris pertama berisi dua bilangan bulat N dan Q, banyak badak yang Pak Chanek terima dan banyak pertanyaan yang ia miliki.

Baris kedua berisi N buah bilangan bulat Pi, panjang cula badak-badak yang Pak Chanek terima.

Q baris selanjutnya berisi sebuah bilangan bulat X, urutan badak yang ingin diketahui panjang culanya.

Format Keluaran
Untuk setiap pertanyaan, keluarkan 1 baris berisi sebuah bilangan bulat, panjang cula badak yang berada di urutan tersebut setelah mereka diurutkan.

Contoh Masukan
3 3
11 97 10
1
2
3
Contoh Keluaran
10
11
97
Batasan
1 ≤ N ≤ 1.000
1 ≤ Pi ≤ 106
1 ≤ Q ≤ 105
1 ≤ X ≤ N
*/