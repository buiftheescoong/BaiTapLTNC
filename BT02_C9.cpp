#include<iostream>

using namespace std;

int main(){
    //freopen("test.inp", "r", stdin);
    //freopen("test.out", "w", stdout);

    int N;
    cin >> N;

    int a_min = 1000001;
    int b_min = 1000001;
    while(N > 0){
        int a, b;
        cin >> a >> b;

        if(a < a_min) a_min = a;
        if(b < b_min) b_min = b;

        N--;

    }

    cout << a_min * b_min;

    return 0;
}
