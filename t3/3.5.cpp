/*5.��дһ�����ַ������ȵĺ���strlen����������strlen����������дһ
������revers��s���ĵ���ݹ����ʹ�ַ���s����*/
#include <iostream>
#include <string>
using namespace std;

long strlen(string );
void revers(string str);

int main()
{
    string str;

    getline(cin,str,'\n');
    revers(str);

    return 0;
}

long strlen(const string str)
{
    return (str.end() - str.begin()) / sizeof(char);
}

void revers(string str)
{
    if(str.empty())
        return;
    cout<<str.substr(strlen(str)-1,1);//��ȡ���һ���ַ����
    str=str.substr(0,strlen(str)-1);//��ȡ�����һ���������ַ�����str
    revers(str);//�ݹ�ֱ���ַ���Ϊ��
}

