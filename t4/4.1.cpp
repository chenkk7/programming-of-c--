/*1.���һ������Point�������һ�������࣬������ʹ��Point������������
��Ϊ���ζԽǶ��㣬���������4������ֵ�������ʹ�ò��Գ�����֤����*/
#include <iostream>
using namespace std;

class Point{
private:
    double x;
    double y;
public:
    Point(){x = 0; y = 0;};
    Point(double a,double b){
        x = a;y = b;
    }
    double getx(){return x;}
    double gety(){return y;}

};
class Rectangle{
private:
    Point a;Point b;
public:
    Rectangle(){};
    Rectangle(Point x,Point y){
        a = x;
        b = y;
    }
    void print(Point &,Point &);

};

int main()
{
    Point a(11,211),b(32,44);
    Rectangle rect(a,b);
    rect.print(a,b);

    return 0;
}

void Rectangle::print(Point &a,Point &b){
    Point c(a.getx(), b.gety()) , d(b.getx(), a.gety());
    cout<<"a������: ("<<a.getx()<<"\t,"<<a.gety()<<")"<<endl;
    cout<<"b������: ("<<b.getx()<<"\t,"<<b.gety()<<")"<<endl;
    cout<<"c������: ("<<c.getx()<<"\t,"<<c.gety()<<")"<<endl;
    cout<<"d������: ("<<d.getx()<<"\t,"<<d.gety()<<")"<<endl;

    double area = (a.getx() - b.getx()) * (a.gety() - b.gety()) * 2;
    area = (area >=  0? area:(-area));
    cout<<"����ǣ�"<<area<<endl;
}
