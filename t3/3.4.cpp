/*4.��д���ַ��Ͳ���C�����β���N�ĺ�������������ʾ�����ַ�C��ɵ������Ρ�
�䷽ʽΪ��1����1���ַ�C����2����2���ַ�C ���ȵȡ�*/

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
void print(char ch, int n);

int main()
{
    char ch;
    int n;

    cout<<"�����ַ����������һ��ӡ��"<<endl;
    while(cin>>ch>>n && n != 0)
    {
        print(ch,n);
        cout<<"�����ַ�������(0 �뿪)"<<endl;
    }

    return 0;
}

void print(char ch, int n)
{
    for(int i = 1;i <= n; i++)
    {
        for(int j = 1;j <= i; j++)
            cout<<ch;
        cout<<endl;
    }
}

