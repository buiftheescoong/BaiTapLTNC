
#include <bits/stdc++.h>

using namespace std;

string  balancedSums(int arr[], int n){
    int sum = 0;
    int sum1 = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    if(sum - arr[0] == 0 || sum - arr[n - 1] == 0) return "YES";
    for(int i = 1; i < n - 1; i++){
        sum1 += arr[i - 1];
        if(sum1 == sum - arr[i] - sum1) return "YES";
    }

    return "NO";
}

int main(){
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        cout <<  balancedSums(arr, n) << endl;
    }

    return 0;
}
