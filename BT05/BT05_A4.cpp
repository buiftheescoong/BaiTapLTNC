#include<iostream>

using namespace std;
string example1(string s){
    char tmp = s[1];
    s[1] = s[2];

    return s;
}
void example2(int arr[], int n){
    arr[2] = arr[1];
}




int main(){
    string s;
    cin >> s;
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i;
    }
    cout << example1(s) << endl;
    // mang  pass-by-reference
    example2(arr, n);// string pass-by-reference
    cout << arr[2] << endl;

    return 0;
}
