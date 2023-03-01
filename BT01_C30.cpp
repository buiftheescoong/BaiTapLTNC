#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
    int N;
    cin >> N;
    for(int i = N; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout << "*";
        }
        for(int k = N - i; k > 0; k--){
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}


