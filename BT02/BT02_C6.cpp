#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);

	int n;
	cin >> n;

	int matrix[n][n];

	for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1) matrix[i][j] = j;
            if(i > 1){
                if(matrix[i - 1][j] == n) matrix[i][j] = 1;
                else matrix[i][j] = matrix[i - 1][j] + 1;
            }
        }
	}

	for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
	}

	return 0;
}


