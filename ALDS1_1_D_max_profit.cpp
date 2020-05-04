#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[200000];
    cin >> n;
    for (int i=0; i<n; ++i) cin >> arr[i];

    int minv, maxv=-2000000000;
    minv = arr[0];

    for (int i=1; i<n; ++i) {
        maxv = max(maxv, arr[i]-minv);
        minv = min(minv, arr[i]);
    }

    cout << maxv << endl;
    return 0;
}
