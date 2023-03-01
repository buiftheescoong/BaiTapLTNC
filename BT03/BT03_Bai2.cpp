#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    int sum_of_even_number = 0;
    int count_odd_number = 0;
    int max_number = INT_MIN;
    int min_number = INT_MAX;
    for(int i = 1; i <= N; i++){
        int x;
        cin >> x;
        if(x % 2 == 0) sum_of_even_number += x;
        else count_odd_number++;
        if(x > max_number ) max_number = x;
        if(x < min_number) min_number = x;
    }

    cout << max_number << endl << min_number << endl << sum_of_even_number << endl << count_odd_number;

    return 0;

}
