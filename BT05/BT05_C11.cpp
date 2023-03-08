#include<iostream>

using namespace std;
int convert_decimal_to_binary(int N){
    int i = 1;
    int binary = 0;
    while(N > 0){
        int phan_du = N % 2;
        binary += i * phan_du;
        i *= 10;
        N = N / 2;
    }

    return binary;
}
int convert_binary_to_decimal (int N){
    int i = 1;
    int decimal = 0;
    while(N > 0){
        int phan_du = N % 10;
        decimal += i * phan_du ;
        i *= 2;
        N = N / 10;
    }

    return decimal;
}
int main(){
    int N, M;
    cin >> N >> M;

    cout << convert_decimal_to_binary(N) << endl;

    cout << convert_binary_to_decimal(M);
    return 0;

}
