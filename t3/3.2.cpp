/*2.���庯��up(ch)�����ַ�����ch��Сд��ĸ��ת���ɴ�д��ĸ��ͨ��up���أ�
�����ַ�ch���ı䡣Ҫ���ڶ�С����ȫ�ĳ�������ʾ������������������õġ�*/

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

inline char up(char ch)
{
    return (ch >= 'a' && ch <= 'z')? (ch-32) : ch;
}

int main()
{
    char ch;

    cout<<"������ĸ,#�뿪"<<endl;
    while( (cin>>ch) && ch != '#' )
    {
        cout<<up(ch);
        cout<<endl<<"������ĸ,#�뿪"<<endl;
    }

    return 0;
}
