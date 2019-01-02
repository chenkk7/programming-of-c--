/*1.��дһ���󷽳�ax2 + bx + c = 0�ĸ� �ĳ�����3�������ֱ���b2-4ac������
�������㡢��С����ʱ�ķ��̵ĸ���Ҫ�������������a,b,c��ֵ����������*/
#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

void root_large(double &a,double &b,double &c);
void root_small(double &a,double &b,double &c);
void root_zero(double &a,double &b,double &c);

int main()
{
    double a,b,c;

    while(1){
        cout<<"����һԪ���η��̵�a,b,c(0�˳�)"<<endl;
        cin>>a;
        if(a == 0) break;
        cin>>b>>c;
        double TEMP = ((b) * (b)) - (4 * (a) * (c));
        if(TEMP > 0)
            root_large(a,b,c);
        else if(TEMP == 0)
            root_zero(a,b,c);
        else
            root_small(a,b,c);
    }

    return 0;
}

void root_large(double &a,double &b,double &c)
{
    double TEMP = ((b) * (b)) - (4 * (a) * (c));
    double answer1 = ((-b) + sqrt(TEMP)) / (2 * a);
    double answer2 = ((-b) - sqrt(TEMP)) / (2 * a);
    cout<<"������̵Ľ��ǣ�"<<answer1<<"\t"<<answer2<<endl;
}

void root_small(double &a,double &b,double &c)
{
    double TEMP = ((b) * (b)) - (4 * (a) * (c));
    double answer1 = (-b) / (2 * a);
    double answer2 = (sqrt(0 - TEMP)) / (2 * a);
    cout<<"������̵Ľ�x1�ǣ�"<<answer1<<" + "<<answer2<<"i"<<endl;
    cout<<"������̵Ľ�x2�ǣ�"<<answer1<<" - "<<answer2<<"i"<<endl;
}

void root_zero(double &a,double &b,double &c)
{
    double TEMP = ((b) * (b)) - (4 * (a) * (c));
    double answer1 = (-b) / (2 * a);
    double answer2 = answer1;
    cout<<"������̵Ľ��ǣ�"<<answer1<<"\t"<<answer2<<endl;
}
