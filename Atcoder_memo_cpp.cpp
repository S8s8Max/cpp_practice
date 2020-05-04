#include <bits/stdc++.h>
using namespace std;

int N, M, H[100000+10], A[100010];

int main(void)
{
    cin >> N >> M;
    for (int i = 1; i <= N; ++i) {
        cin >> H[i];
        A[i] = 0;
    }
    for (int i = 1; i <= M; ++i) {
        int a, b;
        cin >> a >> b;
        A[a] = max(A[a], H[b]);
        A[b] = max(A[b], H[a]);
    }

    int counter=0;
    for (int i = 1; i <= N; ++i) {
        counter += H[i] > A[i];
    }
    cout << counter << endl;
    return 0;
}
