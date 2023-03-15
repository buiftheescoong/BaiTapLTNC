#include<iostream>

using namespace std;

struct Point{
    double x;
    double y;
    Point(){}
    Point(int a, int b){
    x = a;
    y = b;
    }
    void print(){
        cout << &x << " " << &y << endl;
     }
};



int main(){
    Point p(4, 5);
    cout << &p << endl;// 0x61fe10
    p.print(); // 0x61fe10 0x61fe18


    return 0;

}

