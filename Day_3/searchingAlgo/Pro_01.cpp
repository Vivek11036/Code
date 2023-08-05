// Linear Search => find a target number is present in array or not in given array


#include<bits/stdc++.h>
using namespace std;

bool checkNumber (int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    bool ans = checkNumber(arr, target, n);

    if (ans == true) {
        cout << "yes " << target <<" parsent in given array"; 
    }
    else{
        cout << "No " << target <<" not parsent in given array"; 
    }
}