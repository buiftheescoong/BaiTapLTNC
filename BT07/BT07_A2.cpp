#include <iostream>

using namespace std;
void example(int * a){
    int s = sizeof a;
    cout << s << endl;
}

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int b[] {1, 2, 3};
    int size_arrayA = sizeof a;
    int size_arrayB = sizeof b;
    cout << size_arrayA << endl;
    example(a);

    cout << size_arrayB << endl;
    example(b);
    return 0;
}
