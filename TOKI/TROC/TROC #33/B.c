#include <stdio.h>

typedef long long ll;

int min(int a, int b){
    return (a > b) ? b : a;
}

int main()
{
    int m, a, b;
    scanf("%d %d %d", &m, &a, &b);
    if(a+b==m*2 && a%2==1 && b%2==1) printf("%d ", 1);
    else printf("%d ", 0);
    int maxscore = min(a, b);
    printf("%d", maxscore);
}

/*
1. Watch out for integer overflow (Look at the constraints first)
2. Watch out for edge cases
3. Do it in first try
*/