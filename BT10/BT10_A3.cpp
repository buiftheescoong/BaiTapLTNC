#include<iostream>

using namespace std;

struct Point{
    int x;
    int y;
    Point(){}
    Point(int a, int b){
    x = a;
    y = b;
    }
    void print(){
         cout << "(" << x << ", "<< y << ")";
    }

};

Point mid_point(const Point &a,const Point &b){
    Point mid;
    mid.x = (a.x + b.x) / 2;
    mid.y = (a.y + b.y) / 2;

    return mid;
}

int main(){
    Point p1(3, 4);
    Point p2(5,6);
    Point mid = mid_point(p1, p2);
    mid.print();

    return 0;

}

