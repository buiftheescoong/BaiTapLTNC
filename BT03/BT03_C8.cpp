#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int waiting_time = 0;
    int array_time[N];
    for(int i = 0; i < N; i++){
        cin >> array_time[i];
    }
    for(int i = 0; i < N;i++){
        for(int j = i + 1; j < N;j++){
            if(array_time[i] > array_time[j]){
                swap(array_time[i], array_time[j]);
            }
        }
    }
    int patient = N - 1;
    for(int i = 0; i < N - 1; i++, patient--){
        waiting_time += array_time[i] * patient;
    }


    cout << waiting_time;

    return 0;
}
