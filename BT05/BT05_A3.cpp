#include<iostream>

using namespace std;
int tham_tri(int a){
    cout << (&a) << endl;
    return 23;
}
int tham_bien(int & a){
    cout << (&a) << endl;
    return 23;
}

int main(){
    int a;
    cin >> a;
    cout << &a << endl;
    cout << tham_bien(a) << endl;
    cout << tham_tri(a) << endl;

    return 0;
}
/*
0x61fe1c
0x61fe1c
0x61fdf0
*/
