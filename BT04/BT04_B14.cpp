
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count_A[101] = {};
    int count_B[101] = {};
    int N;
    cin >> N;
    int a[N];
    int b[N + 1];
   for(int i = 0; i < N; i++){
       cin >> a[i];
       count_A[a[i]]++;
   }
    for(int i = 0; i < N + 1; i++){
       cin >> b[i];
       count_B[b[i]]++;
   }


    for(int i = 0; i < 101; i++){
        if(count_A[i] != count_B[i]){
            cout << i;
            break;
        }
    }
    return 0;

}
