#include<bits/stdc++.h>
using namespace std;
int factorial(int x){
    cout << "x "<< x << " at " << &x << endl;
    if(x > 1) return factorial(x - 1) * x;
    else return 1;
}


int main(){
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
	int x;
	cin >> x;

	cout << factorial(x);

	return 0;



}
/*5
x 5 at 0x61fdf0
x 4 at 0x61fdc0
x 3 at 0x61fd90
x 2 at 0x61fd60
x 1 at 0x61fd30
120 */
