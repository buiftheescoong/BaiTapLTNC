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

void print(Point p){
    cout << "(" << p.x << ", "<< p.y << ")";
}

int main(){
    Point p(3, 4);
    print(p);

    return 0;

}
