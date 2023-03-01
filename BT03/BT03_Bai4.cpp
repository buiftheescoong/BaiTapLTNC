#include<iostream>
using namespace std;
void Pascal(int n){
    int matrix[n + 1][n + 1];
    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n + 1; j++){
            if(j == 0 || j == i) matrix[i][j] = 1;
            if(j > i) matrix[i][j] = 0;
            if(j > 0 && j < i) matrix[i][j] = matrix[i - 1][j] + matrix[i - 1][j - 1];
        }
    }

    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n + 1; j++){
            if(matrix[i][j] != 0 ) cout << matrix[i][j] << " ";
            else cout << " " << " ";
        }
        cout << endl;
    }
}



int main(){
    int n;
    cin >> n;
    Pascal(n);

    return 0;
}
