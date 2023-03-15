#include<bits/stdc++.h>

using namespace std;
void permutation(string s, string answer){
    if(s.length() == 0){
        cout << answer << " ";
        return;
    }
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        string left_substr = s.substr(0, i);
        string right_substr = s.substr(i + 1);
        string rest = left_substr + right_substr;
        permutation(rest, answer + ch);

    }

}

int main(){
    string s;
    cin >> s;
    string answer ="";
    permutation(s, answer);

    return 0;
}
