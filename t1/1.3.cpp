//3.��д�����ĳ���������15��floatֵ����ָ������Ǵ����һ���洢���Ȼ�������Щֵ���Լ���Сֵ
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    float * p;
    float sum;

    p=new float[15];
    cout<<"����15����:";
    for (int i=0; i < 15; i++)
    {
        cin>>p[i];
    }
    sort(p,p+15);
    for (int i = 0; i < 15; i++)
    {
        cout <<p[i]<<' ';
        sum +=p[i];
    }
    cout<<endl<<"����:"<<sum<<endl;
    cout<<"��Сֵ��:"<<p[0]<<endl;

    delete []p;

    return 0;
}
