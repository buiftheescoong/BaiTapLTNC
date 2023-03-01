#include<iostream>

using namespace std;
bool SoDoiGuong(int n ){
    string s = to_string(n);
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
int Dem_So_Doi_Guong(int A, int B){
    int cnt = 0;
    for(int i = A; i <= B; i++){
        if( SoDoiGuong(i)) cnt++;
    }

    return cnt;
}
int main(){
    int T;
    cin >> T;
    while(T > 0){
        int A, B;
        cin >> A >> B;
        cout << Dem_So_Doi_Guong( A,  B) << endl;
        T--;
    }

    return 0;
}
