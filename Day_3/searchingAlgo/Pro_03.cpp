// Linear Search => find a target count is present in array or not.

#include<bits/stdc++.h>
using namespace std;

int checkNum (int arr[], int target, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count ++;
        }
    }

    return count;
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