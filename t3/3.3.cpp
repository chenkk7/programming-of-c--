/*3.��д��������ô�ʵ��r������n���������ĺ��������r��n���ݡ�*/

#include <iostream>
using namespace std;

double mypower(double r, int n);

int main()
{
    double r;
    int n;

    cout<<"����׺���(�ײ�Ϊ0)."<<endl;
    while( (cin>>r>>n) && r != 0)
    {
        cout<<r<<"��"<<n<<"������:"<<mypower(r,n)<<endl;
        cout<<"����׺���(�ײ�Ϊ0)."<<endl;
    }

    return 0;
}

double mypower(double r, int n)
{
    double answer=1;

    if(n > 0)
    {
        for(int i=1;i<=n;i++)
            answer*=r;
    }
    else if(n < 0)
    {
        for(int i=0;i<-n;i++)
            answer*=(1/r);
    }
    else
        ;

    return answer;
}
