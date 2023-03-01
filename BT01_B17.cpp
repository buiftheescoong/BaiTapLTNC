#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
    int year;
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) cout << "true";
    else cout << "false";

    return 0;
}
