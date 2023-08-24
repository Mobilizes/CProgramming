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
    map<int, bool> mp;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        mp[x] = true;
    }
    for(int i=0; i<q; i++){
        int x; cin >> x;
        if(mp[x]) cout << "ada" << el;
        else cout << "tidak ada" << el;
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
Saat ini, anda sedang gemar dengan suatu seri komik. Anda pun ingin melengkapi koleksi komik anda untuk seri tersebut. Anda lalu berencana untuk membelinya di toko buku. Saat ke toko buku, anda mengetahui bahwa di toko tersebut terdapat N jilid berbeda dari komik yang anda cari. Untuk melengkapi koleksi anda, anda sedang mencari Q jilid. Untuk setiap jilid yang anda cari, apakah jilid tersebut ada di toko buku tersebut?

Format Masukan
Baris pertama berisi dua buah bilangan bulat N dan Q, banyak jilid yang terdapat di toko dan banyak jilid yang anda cari.

Baris kedua berisi N buah bilangan bulat Bi, jilid yang terdapat di toko tersebut.

Q baris selanjutnya berisi sebuah bilangan bulat X, jilid yang anda cari.

Format Keluaran
Untuk setiap jilid yang anda cari, keluarkan satu baris berisi "ada" (tanpa tanda petik) jika jilid tersebut ada, atau satu baris berisi "tidak ada" (tanpa tanda petik) jika tidak ada.

Contoh Masukan
3 3
4 10 100
10
9
4
Contoh Keluaran
ada
tidak ada
ada
Batasan
1 ≤ N, Q ≤ 105
1 ≤ Bi ≤ 106
1 ≤ X ≤ 106
Untuk setiap i < j, Bi < Bj.
*/