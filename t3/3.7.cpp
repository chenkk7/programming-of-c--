/*7.���ú���ģ�����һ��������Ԫ���к͵ĺ�����������֮��*/

#include <iostream>
using namespace std;

template <class T1>
T1 sum(T1 ar[],int n);

int main()
{
    double ar[]={1,2,6,9,7};

    cout<<sum(ar,5);

    return 0;
}

template <class T1>
T1 sum(T1 ar[],int n)
{
    T1 tol=0;

    for(int i=0;i<n;i++)
        tol+=ar[i];

    return tol;
}
