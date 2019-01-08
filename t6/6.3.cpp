/*3.����һ���߶�����Ϊ���εĻ��࣬�����������յ����꣬���������ͳ����Լ��߶�
��x��ļнǵĳ�Ա���������������߶ζ��������������Ϊ�Լ�һ���ߵ�λ�ã�����
������һ���ߣ���������ε�4���������ꡣ������Ķ��岢�ó�����֤���ǵĹ��ܡ�*/

#include <iostream>
#include <cmath>
using namespace std;
/*******************************************************************/
const double PI = 3.14159265359;

class Line{
    protected:
        double startx_, starty_;
        double endx_, endy_;
    public:
        Line(){}
        Line(double a, double b, double c, double d) :
            startx_(a), starty_(b), endx_(c), endy_(d) {}
        void PrintXY() const{
            cout<<"�������: ("<<startx_<<" , "<<starty_<<")"<<endl;
            cout<<"�յ�����: ("<<endx_<<" , "<<endy_<<")"<<endl;
            }
        void PrintAngle() const{
            double dx = startx_ - endx_;
            double dy = starty_ - endy_;
            double len = sqrt( pow((dx), 2) + pow((dy), 2));
            cout<<"�߶γ�����:"<<len<<endl;

            double angle = len > 0 ? round( asin(dy / len) / PI *180) : 0;
            //angle��Χ(-90,90)���յ���������ʱ�����봦��
            if(endx_ < startx_) {
                angle = 180 - angle;
                }
            cout<<"�߶νǶ���:"<<-angle<<endl;
            }
};
/*******************************************************************/
int main()
{
    Line a(0,0,2,2);
    a.PrintAngle();

    return 0;
}
/*******************************************************************/
