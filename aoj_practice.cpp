#include<bits/stdc++.h>
using namespace std;

bool isPrime(int arr) {
    int result=0;
    if (arr == 2) return true;
    if (arr < 2 || arr%2 == 0) return false;

    int x = arr;
    int j = 3;
    while (j <= sqrt(x)) {
        if (x%j == 0) return false;
        j += 2;
    }
    return true;
}

int main ()
{
    int n, arr, result=0;
    cin >> n;

    for (int i=0; i<n; ++i) {
        cin >> arr;
        if (isPrime(arr)) result++;
    }
    cout << result << endl;
    return 0;
}
