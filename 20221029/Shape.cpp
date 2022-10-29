//
// Created by 韩战召 on 2022/10/29.
//

//Shape类有数据成员r, 虚函数perimeter周长，虚函数Area面积。
//派生类Circle实现周长和面积函数。
//析构函数输出“De..............";
//求半径为10的周长和面积

#include <iostream>
using namespace std;
const double PI = 3.14;
class Shape {
public:
    double r;
    virtual double perimeter() = 0;
    virtual double Area() = 0;
};

class Circle:public Shape{

public:
    ~Circle(){
        cout << "De....." << endl;
    }
    Circle(int a){
        r = a;
    }
    double perimeter(){
        return r*2*PI;
    }
    double Area(){
        return PI*r*r;
    }

};

int main(){
    Circle A();
    Circle C(10);
    double b = C.perimeter();
    double a = C.Area();
    cout << b << endl;
    cout << a << endl;
}