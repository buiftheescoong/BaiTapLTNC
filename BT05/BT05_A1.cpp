#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
    int x = 3;
    int k = 10;
	int a[] = {1, 2, 3, 4};
	char b[] = {'a', 'b', 'c', 'd'};
    char y = 'z';

	for(int i = 0; i < 3; i++){
        cout << (void*) &a[i] << " ";
        // 0x61fe00 0x61fe04 0x61fe08
        // Sau khi thêm biến 0x61fdf0 0x61fdf4 0x61fdf8
	}

	cout << endl;
	for(int i = 0; i < 3; i++){
        cout << (void*) &b[i]<< " ";
        //0x61fdfc 0x61fdfd 0x61fdfe
        // Sau khi thêm biến 0x61fdec 0x61fded 0x61fdee
	}

	return 0;

}

