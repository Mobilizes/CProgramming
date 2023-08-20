#include <bits/stdc++.h>

using namespace std;

int main()
{
	char arr[10] = {'I', 'N', 'F', 'O', 'R', 'M', 'A', 'T', 'I', 'C'};
	int n = 1;
	int m = 1;
	for(int i=0; i<2022; i++)
	{
		n *= 2;
		m *= 3;
		n %= 10;
		m %= 10;
	}
	cout << arr[n-1] << ' ' << arr[m-1];
}