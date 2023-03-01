
#include<iostream>

using namespace std;
int cnt[10];
int main(){
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        int x;
        cin >> x;
        cnt[x]++;
    }

    for(int i = 0; i < 10; i++){
        cout << i << " : " << cnt[i] << endl;
    }

    return 0;
}
