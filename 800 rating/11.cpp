#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);

    int low = 0;
    int high = n - 1;
    int minAbsValue = abs(arr[0]);

    while (low <= high) {
        long long  mid = low + (high - low) / 2;
        
        if (abs(arr[mid]) < minAbsValue) {
            minAbsValue = abs(arr[mid]);
        }

        if (abs(arr[mid]) == 0) {
            minAbsValue = 0;
            break;
        }
        if (abs(arr[mid]) < abs(arr[high])) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << minAbsValue << endl;

    return 0;
}
