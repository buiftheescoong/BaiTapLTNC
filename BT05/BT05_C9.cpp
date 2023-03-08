#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <stdio.h>

using namespace std;

int generate_random_number_less_than_N(int N){
    return rand() % N;
}

int main(){
    srand(time(NULL));
    int N;
    cin >> N;

    cout << generate_random_number_less_than_N(N);

    return 0;
}

