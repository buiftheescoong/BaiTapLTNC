#include<iostream>
using namespace std;

bool XauDoiXung(string s){
    bool result = true;
    int length = s.length();
    for(int i = 0, j = length - 1;i <= j ;i++, j--){
        if(s[i] != s[j]){
            result = false;
            break;
        }
    }

    return result;
}

int main(){
    string s;
    cin >> s;
    if(XauDoiXung(s)) cout << "Yes";
    else cout << "No";

    return 0;
}

