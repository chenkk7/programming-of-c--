/*4.�����������飺 float *p; p = new float[15]; cout<<

int a[] = {1 ,2 ,3, 4, 5, 6, 7, 8}��

�Ȳ���4��λ�ã�������a���Ƹ�����b��Ȼ������a�����ݷ�ת���ٲ���4��λ��
�����ֱ��������a��b�����ݡ�*/
#include <iostream>
#include <algorithm>
//#include <functional>
#include <iterator>
using namespace std;

int main()
{
    int a[]={1, 2, 3, 4, 5, 6, 7, 8}, b[8];

    *find(a, a+8, 4) == 4 ? cout<<"�ҵ���"<<endl:
                            cout<<"û�ҵ�"<<endl;
    copy(a, a+8, b);
    reverse(a,a+8);
    *find(a, a+8, 4) == 4 ? cout<<"�ҵ���"<<endl:
                            cout<<"û�ҵ�"<<endl;
    copy(a,a+8,ostream_iterator<int>(cout," "));
    cout<<endl;
    copy(b,b+8,ostream_iterator<int>(cout," "));
    cout<<endl;

    return 0;
}
