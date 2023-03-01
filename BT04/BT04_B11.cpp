#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);

	int num;
	cin >> num;    //Reading input from STDIN
	string s[num];
	for(int i = 0; i < num; i++){
		cin >> s[i];
	}
	int length = 0;
	char result;

	for(int i = 0; i < num - 1; i++){
		for(int j = i + 1; j < num; j++){

			if(s[i].size() == s[j].size()){
				bool temp = true;
				int size = s[i].size();
				for(int m = 0, n = size - 1; m < size, n > -1; m++, n--){

						if(s[i][m] != s[j][n]) {
							temp = false;
							break;
						}
                }
                if(temp){
                    length = size;
					result = s[i][(size - 1)/ 2];
					break;
				}
            }
            else continue;

        }

    }


	cout << length << " " << result;
	return 0;


}

