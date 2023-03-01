#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
    for(int i = 1; i < 25; i++){
        if(i == 1) cout << "12 midnight" << endl;
        else{
            if(i <= 12) cout << i - 1 << "am" << endl;
            else{
                if(i == 13) cout << "12 noon" << endl;
                else cout << i - 13 << "pm" << endl;
            }
        }
    }

    return 0;
}

