#include<iostream>

using namespace std;

int main(){


    int x;
    cin >> x;
    cout << x << " ";
    if(x > -1){
        int temporary_number = x;
        while(1){
            int a;
            cin >> a;
            if(a != temporary_number) {
                    cout << a << " ";
                    temporary_number = a;
            }
            if(a < 0) break;
        }
    }
    return 0;


}
