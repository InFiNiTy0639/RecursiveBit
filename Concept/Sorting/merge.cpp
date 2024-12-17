#include <bits/stdc++.h>
using namespace std;
#define VI vector<int>
void merge(VI &arr, int low, int mid, int high) {
    VI a;
    int i = low, j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            a.push_back(arr[i]);
            i++;
        } else {
            a.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid) {
        a.push_back(arr[i]);
        i++;
    }
    while (j <= high) {
        a.push_back(arr[j]);
        j++;
    }
    for (int k = 0; k < a.size(); k++) {
        arr[low + k] = a[k];
    }
}
void divide(VI &arr, int low, int high) {
    if (low >= high)return;
    int mid = low + (high - low) / 2;
    divide(arr, low, mid);
    divide(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void printvector(const VI &arr) {
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    VI arr = {12, 34, 89, 3, 97, 0, -12, 56, 32, 1};
    int n = arr.size();
    divide(arr, 0, n - 1);
    printvector(arr);
    return 0;
}
