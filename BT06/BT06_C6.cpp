#include<bits/stdc++.h>

using namespace std;
void hoan_vi(int a[], int i){
    int temp = a[i];
    a[i] = a[i - 1];
    a[i - 1] = temp;
}
void in_mang(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    cout << endl;
}
int giaithua(int n){
    if(n == 0) return 1;
    else return n * giaithua(n - 1);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = i + 1;
    }
    in_mang(a,n);

    int cnt = 1;
    while(cnt < giaithua(n) ){
        int temp = a[n - 1];
        int i = n - 1;
        while(cnt < giaithua(n)){
            hoan_vi(a, i);
            in_mang(a, n);
            i--;
            cnt++;
            if(i == 0) break;
        }
    }


    return 0;

}

