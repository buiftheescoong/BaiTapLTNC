#include<bits/stdc++.h>
using namespace std;
bool prime_number(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }

    return true;
}
int main(){
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
	int number;
	cin >> number;

	if(prime_number(number)) cout << "yes";
	else cout << "no";

	return 0;

}

