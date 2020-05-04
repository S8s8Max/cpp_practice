#include <bits/stdc++.h>
using namespace std;

int linear_search(int ar[], int n, int key)
{
    int i=0;
    ar[n] = key;
    while (ar[i] != key) i++;
    return i != n;
}

int main()
{
    int n, q, sum=0, A[10000+1], key;

    scanf("%d", &n);
    for (int i=0; i<n; ++i) scanf("%d", &A[i]);

    scanf("%d", &q);
    for (int i=0; i<q; ++i) {
        scanf("%d", &key);
        if ( linear_search(A, n, key) ) sum++;
    }
    printf("%d\n", sum);

    return 0;
}
