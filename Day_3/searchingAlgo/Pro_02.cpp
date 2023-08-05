// Linear Search => find a target number index is present in array or not.

#include<bits/stdc++.h>
using namespace std;

int checkNum (int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for ( int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int ans =  checkNum(arr, target, n);
    cout << ans;
}