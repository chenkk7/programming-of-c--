/*2.��֪һ��string�Ķ���str������Ϊ��We are here������ʹ�ö��ַ��������h����*/
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    string str="We are here��";

    int i=str.find('h',0);
    cout<<"1 "<<str[i]<<endl;//str��i��Ԫ��

    string str2 = str.substr(i,1);//��ȡ
    cout<<"2 "<<str2<<endl;

    char str3 = str[i];
    cout<<"3 "<<str3<<endl;

    char str4[1];
    copy(str.begin()+i, str.begin()+i+1, str4);//��������
    cout<<"4 "<<str4[0]<<endl;

    return 0;
}
