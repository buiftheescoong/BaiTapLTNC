#include<bits/stdc++.h>
using namespace std;
string FibonacciWord(int n){
    if(n == 0) return "a";
    if(n == 1) return "b";
    else return FibonacciWord(n - 1) + FibonacciWord(n - 2);

}
int main(){
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
	for(int i = 0; i < 11; i++){
        cout << FibonacciWord(i) << endl;
	}

	return 0;
}
