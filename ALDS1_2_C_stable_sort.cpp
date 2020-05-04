#include <bits/stdc++.h>
using namespace std;

struct Card {char suit, value;};

void bubble_sort(struct Card arr[], int n)
{
    int num=0, index=0;
    bool flag = true;

    while (flag) {
        flag = false;
        for (int j=n-1; j>=index+1; --j) {
            if (arr[j-1].value > arr[j].value) {
                swap(arr[j-1], arr[j]);
                num++;
                flag = true;
            }
        }
        index++;
    }
}
void selection_sort(struct Card arr[], int n)
{
    int
        result=0,
        minv;
    //print result!
    for (int i=0; i<n; ++i) {
            minv = i;
        for (int j=i; j<n; ++j) {
            if (arr[j].value < arr[minv].value) {
                minv = j;
            }
        }
        swap(arr[i], arr[minv]);
    }
}
void output(struct Card arr[], int n)
{
    for (int i=0; i<n; ++i) {
        if (i) cout << " ";
        cout << arr[i].suit << arr[i].value;
    }
    cout << endl;
}
bool isStable(struct Card C1[], struct Card C2[], int n)
{
    for (int i=0; i<n; ++i) {
        if (C1[i].suit != C2[i].suit) return false;
    }
    return true;
}

int main()
{
    Card
        C1[100],
        C2[100];
    int n;

    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> C1[i].suit >> C1[i].value;
    }

    for (int i=0; i<n; ++i) C2[i] = C1[i];

    bubble_sort(C1, n);
    selection_sort(C2, n);

    output(C1, n);
    cout << "Stable" << endl;
    output(C2, n);
    if (isStable(C1, C2, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}
