#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
	while(true){
        int N;
        cin >> N;
        if(N >= 0 && N % 5 == 0) cout << N / 5 << " ";
        else{
            if(N != -1) cout << -1 << " ";
            else{
                cout << "Bye";
                break;
            }
         }
	}
	return 0;
}

