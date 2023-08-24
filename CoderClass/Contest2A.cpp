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


int n, m;
vector<pair<string, ll>> arr;

bool comparator(pair<string, ll> a, pair<string, ll> b){
    for(int i=0; i<a.fi.length(); i++){
        if(((i+1)%2==0)){
            if(a.fi[i] > b.fi[i]) return true;
            else if(a.fi[i] < b.fi[i]) return false;
        } else{
            if(a.fi[i] < b.fi[i]) return true;
            else if(a.fi[i] > b.fi[i])return false;
        }
    }
    return a.se < b.se;
}

int main()
{
    Mob;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        string c; cin >> c;
        arr.push_back(make_pair(c, i));

    }
    sort(arr.begin(), arr.end(), comparator);
    for(int i=0; i<n; i++) cout << arr[i].se << ' ';
    return 0;
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/

/*
Deskripsi
Andi dan Budi diberi tugas oleh Pak Chanek untuk merapikan rak buku yang di dalamnya terdapat 
�
N buku. 
�
N judul buku masing-masing dapat direpresentasikan sebagai sebuah string 
�
�
S 
i
​
  yang dinomori dari 
1
1 sampai 
�
N.

Pak Chanek tidak menentukan cara untuk menyusun buku-buku tersebut. Andi ingin menyusun buku-buku terurut secara leksikografis menaik, sedangkan budi ingin menyusun buku-buku terurut secara leksikografis menurun.

Melihat perbedaan ide ini, Andi dan Budi memutuskan untuk menggabungkan ide mereka dan menyusun secara Menarun (Menaik dan Menurun) ala Andi dan Budi. Urutan Menarun adalah urutan dengan karakter pada karakter berindeks ganjil pada string akan diurutkan secara menaik, sedangkan karakter berindeks genap pada string akan diurutkan secara menurun.

Secara formal, Sebuah string 
�
a lebih kecil dari 
�
b pada urutan Menarun, jika dan hanya jika posisi pada huruf pertama di mana 
�
a dan 
�
b berbeda, berlaku:

Jika berada pada posisi ganjil, maka huruf pada 
�
a muncul terlebih dahulu dibandingkan dengan huruf pada 
�
b pada indeks yang bersesuaian dalam urutan alfabet.
Jika berada pada posisi genap, maka huruf pada 
�
b muncul terlebih dahulu dibandingkan dengan huruf pada 
�
a pada indeks yang bersesuaian dalam urutan alfabet.
Diberikan 
�
N buah string dengan panjang masing-masing 
�
M, urutkanlah string tersebut secara Menarun.

Batasan
1
≤
�
×
�
≤
1
000
000
1≤N×M≤1000000
�
≠
�
⟹
�
�
≠
�
�
i

=j⟹S 
i
​
 

=S 
j
​
 , dengan kata lain 
�
�
S 
i
​
  saling berbeda.
�
�
S 
i
​
  hanya terdiri dari huruf latin kapital (A - Z).
Masukan
N M
S1
S2
⋮
SN
Keluaran
Keluarkan 
�
N buah bilangan bulat yang berisikan nomor indeks dari string setelah diurutkan dipisahkan oleh spasi.

Contoh Masukan
5 2
AA
AB
BB
BA
AZ
Contoh Keluaran
5 2 1 3 4
*/