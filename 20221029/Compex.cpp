//
// Created by 韩战召 on 2022/10/30.
//

#include<iostream>

using namespace std;
class Complex{
public:
    int real, //实数部分
    virt;//虚数部分

};
Complex& operator+(Complex& com1, Complex &com2){
    Complex temp;
    temp.real = com1.real + com2.real;
    temp.virt = com1.virt + com2.virt;
    return temp;
}
Complex& operator-(Complex& com1, Complex &com2){
    Complex temp;
    temp.real = com1.real - com2.real;
    temp.virt = com1.virt - com2.virt;
    return temp;
}
//(a+bi)(c+di)=(ac-bd)+(bc+ad)i
Complex& operator*(Complex& com1,Complex &com2){
    Complex temp;
    temp.real = com1.real * com2.real - com1.virt* com2.virt;
    temp.virt = com1.virt * com2.real + com1.virt* com2.real;
    return temp;
}
//(a+ib)/(c+id)
//=(a+ib)(c-id)/(c+id)(c-id)
//=(ac+bd)/(c^2+d^2)+i(bc-ad)/(c^2+d^2)
Complex& operator/(Complex& com1,Complex &com2){
    Complex temp;
    int t = com2.real*com2.real + com2.virt*com2.virt;
    temp.real = (com1.real * com2.real + com1.virt* com2.virt) / t;
    temp.virt = (com1.virt*com2.real - com1.real*com2.virt) / t;
    return temp;
}

int main(){
    Complex com1, com2, com3;
    cin >> com1.real >> com1.virt;
    cin >> com2.real >> com2.virt;
    com3 = com1 + com2;
    cout << com3.real <<" "<< com3.virt << endl;
}