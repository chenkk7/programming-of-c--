/*6.�ú���ģ��ʵ��3����ֵ�а���Сֵ�����ֵ����ĳ���*/

#include <iostream>
#define SIZE 3
using namespace std;
template <class T>
void mysort(T a, T b, T c);
int main()
{
    double a,b,c;

    cin>>a>>b>>c;
    mysort(a,b,c);

    return 0;
}

template <class T>
void mysort(T a, T b, T c)
{
    T max,mid,min;
    if(a>=b && a>=c)
    {
        max=a;
        if(b>=c)
        {
            mid=b;
            min=c;
        }
        else
        {
            mid=c;
            min=b;
        }
    }

    if(b>=a && b>=c)
    {
        max=b;
        if(a>=c)
        {
            mid=a;
            min=c;
        }
        else
        {
            mid=c;
            min=a;
        }
    }

    if(c>=a && c>=b)
    {
        max=c;
        if(a>=b)
        {
            mid=a;
            min=b;
        }
        else
        {
            mid=b;
            min=a;
        }
    }

    cout<<"��С������"<<min<<"\t"<<mid<<"\t"<<max<<endl;
}
