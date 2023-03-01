#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int cnt[N + 1] = {0};
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        cnt[x]++;
    }
    bool lap = false;
    for(int i = 0; i <= N; i++){
        if(cnt[i] >= 2) lap = true;

    }
    if(lap) cout << "Yes";
    else cout << "No";

    return 0;
}
