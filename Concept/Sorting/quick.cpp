#include <bits/stdc++.h>
using namespace std;
#define VI vector<int>
int divide(VI &arr, int low , int high){
    int pivot = arr[low];
    int i = low, j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1) i++;
        while(arr[j]>pivot && j>=low+1) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void sort(VI &arr,int low,int high){
    if(low<high){
        int divideIdx = divide(arr,low,high);
        sort(arr,low,divideIdx-1);
        sort(arr,divideIdx+1,high);
    }
}
int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    VI arr = {12, 34, 89, 3, 97, 0, -12, 56, 32, 1};
    int n = arr.size();
    sort(arr, 0, n - 1);
    for(int i  = 0;i<n ;i++) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
