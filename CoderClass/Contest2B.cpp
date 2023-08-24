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


ll findmx(ll n, ll m){
    ll x = n-m;
    return x/4;
}

ll findmn(ll n, ll m){
    ll x = n - m*4;
    return x;
}

int main()
{
    Mob;
    ll n, m; cin >> n >> m;
    if(n>m*5 or n<m){
        cout << "-1 -1" << el;
    } else {
        ll mx, mn;
        mx = findmx(n, m);
        mn = findmn(n, m);
        cout << max(0LL, mn) << ' ' << max(0LL, mx) << el;
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
Akhir-akhir ini Pak Chanek sering menggunakan aplikasi ojek daring Go-Terra.

Pada aplikasi ini, Pak Chanek selalu memberikan rating berupa bintang kepada para ojek yang telah membantunya. Banyak bintang yang dapat diberikan kepada setiap ojek daring berkisar pada rentang 1 sampai 5 inklusif.

Pak Chanek membuka aplikasi ojek daring tersebut dan kemudian melihat bahwa dia telah memberikan N buah bintang kepada M ojek daring.

Sekarang Pak Chanek penasaran berapa nilai minimum dan maksimum dari banyaknya ojek daring yang mendapatkan 5 bintang. Bantulah Pak Chanek untuk menghilangkan rasa penasarannya atau cetak 
−
1
−1
 
−
1
−1
 apabila hal tersebut mustahil!

Format Masukan
N M
Format Keluaran
Keluarkan nilai minimum dan maksimum dalam satu baris sesuai deskripsi atau cetak "-1 -1" apabila hal tersebut mustahil.

Contoh Masukan 1
14 4
Contoh Keluaran 1
0 2
Contoh Masukan 2
100 1
Contoh Keluaran 2
-1 -1
Penjelasan
Pada contoh masukan 1, Pak Chanek bisa saja memberikan 2 bintang kepada salah satu ojek daring dan memberikan masing-masing 4 bintang kepada ojek daring lainnya sehingga tidak ada ojek daring yang mendapatkan 5 bintang. Pak Chanek juga bisa memberikan 2 bintang kepada 2 orang ojek daring dan memberikan masing-masing 5 bintang kepada ojek daring lainnya sehingga terdapat 2 ojek daring yang mendapatkan 5 bintang.

Pada contoh masukan 2, Pak Chanek tidak mungkin memberikan 100 bintang hanya kepada seorang ojek daring.

Batasan
1 ≤ N, M ≤ 1015
*/