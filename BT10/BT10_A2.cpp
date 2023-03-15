#include<iostream>

using namespace std;

struct Point{
    double x;
    double y;
    Point(int a, int b){
    x = a;
    y = b;
    }
};

void pass_by_value(Point p){
    cout << &p << endl;
}
void pass_by_reference(Point &p){
    cout << &p << endl;
}
int main(){
    Point p(3, 4);
    cout << &p << endl; //0x61fe10
    pass_by_reference(p); //0x61fe10
    pass_by_value(p); // 0x61fdb0

    return 0;

}
