#include<iostream>
#include<math.h>

using namespace std;

double rnd(double x){
    // Hàm double ceil(double x) trong Thư viện C trả về giá trị nguyên nhỏ nhất lớn hơn hoặc bằng x
    // Hàm double floor(double x) trong Thư viện C trả về giá trị nguyên lớn nhất nhỏ hơn hoặc bằng x
    if(ceil(x) - x > x - floor(x)) return floor(x);
    else return ceil(x);
}

double RND(double x){
   if(x - int(x) > int(x) + 1 - x) return (int)x + 1;
   else return (int)x;
}

int main(){
    double x;
    cin >> x;

    cout << rnd(x) << endl;

    cout << RND(x) << endl;

    return 0;
}
