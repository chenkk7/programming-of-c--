/*1.���һ�����࣬�ӻ�������Բ������Ƴ�Ա����������ǵ�����������*/

#include <iostream>
using namespace std;
/*********************************************************************/
//����
class Point{
    protected:
        double x_; double y_;
    public:
        Point() {}
        Point(int a,int b): x_(a), y_(b) {}
        double Getx() const {return x_;}
        double Gety() const {return y_;}
};
//Բ��
class Circle:public Point{
    protected:
        double radius_;//�뾶
    public:
        Circle() {}
        Circle(double a, double b, double c):
            Point(a,b), radius_(c) {}
        double GetArea(Circle) const; //�����
};
//Բ����
class Cylinder:public Circle{
    protected:
        double high_;
    public:
        Cylinder(){}
        Cylinder(double a, double b, double c, double d):
            Circle(a,b,c),high_(d) {}
        double GetVolume(Cylinder) const; //�����
};
//����Pi
const double Pi = 3.14159265359;
/*********************************************************************/
int main()
{
    double x, y, high, r;

    cout<<"����������:";
    cin>>x>>y;
    cout<<"����뾶�͸�:";
    cin>>r>>high;

    Cylinder obj(x,y,r,high);
    cout<<"�����:"<<obj.GetArea(obj)<<endl;
    cout<<"�����:"<<obj.GetVolume(obj)<<endl;

    return 0;
}
/*********************************************************************/
//��������
double Circle::GetArea(Circle a) const{//�����
    return (2 * Pi * a.radius_ * a.radius_);
}

double Cylinder::GetVolume(Cylinder a) const{//�����
    return (a.GetArea(a) * a.high_);
}

