#include <bits/stdc++.h>
using namespace std;

int A[1000000], n;

int binary(int key)
{
    int left=0, mid, right=n;

    while (left < right) {
        mid = (left + right)/2;
        if (A[mid] ==key) return 1;
        else if (key < A[mid]) right = mid;
        else left = mid + 1;
    }
    return 0;
}

int main()
{
    int q, k, sum=0;

    scanf("%d", &n);
    for (int i=0; i<n; ++i) scanf("%d", &A[i]);

    scanf("%d", &q);
    for (int i=0; i<q; ++i) {
        scanf("%d", &k);
        if ( binary(k) ) sum++;
    }
    printf("%d\n", sum);

    return 0;
}
