/*1.������������complex��ʹ����Ԫ����addʵ�ָ����ļӷ���*/

#include <iostream>
using namespace std;

class Complex{
private:
    double x;//ʵ��
    double y;//�鲿
public:
    Complex():x(0),y(0){}
    Complex(double x,double y):x(x),y(y){}
    double getx(){ return x; }
    double gety(){ return y; }
    friend Complex add(Complex & a,Complex & b);
};

int main(){
    Complex a(2,3), b(3,4), c;
    c = add(a,b);
    cout<<c.getx()<<" + "<<c.gety()<<"i"<<endl;

    return 0;
}

Complex add(Complex & a,Complex & b){
    Complex sum;
    sum.x = a.x + b.x;
    sum.y = a.y + b.y;
    return sum;
}
