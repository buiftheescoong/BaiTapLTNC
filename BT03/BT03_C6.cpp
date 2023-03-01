#include<iostream>

using namespace std;
void magic_square(int n){
    int square[n][n] = {};
    int i = n / 2;
    int j = n - 1;

    for(int number = 1; number <= n * n; ){
        if(i == -1 && j == n){
            i = 0;
            j = n - 2;
        }
        else{
            if(i == -1) i = n - 1;
            if(j == n) j = 0;
        }
        if(square[i][j] != 0){
            i++;
            j -= 2;
            continue;
        }
        else{
            square[i][j] = number++;
            i--;
            j++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << square[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    magic_square(n);

    return 0;
}
