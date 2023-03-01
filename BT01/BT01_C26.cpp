#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
	int N;
	cin >> N;
	int max_number = INT_MIN;
	int min_number = INT_MAX;
	int sum = 0;
	int numbers = N;
	while(N > 0){
        int x;
        cin >> x;
        if(x > max_number) max_number = x;
        if(x < min_number) min_number = x;
        sum += x;
        N--;
	}

	double average_number = sum / (double) numbers;
	cout << average_number << endl << max_number << endl << min_number;

	return 0;
}

