#include <stdio.h>

typedef long long ll;


int main()
{
    int n, m, x, y;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &x);
    scanf("%d", &y);
    const int KKM = 25;
    int score = 0;
    score += n - x;
    score += (m - y) * 2;
    if(score > KKM) printf("LOLOS");
    else printf("TIDAK LOLOS");
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/