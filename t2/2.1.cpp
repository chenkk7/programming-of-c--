//1.ʹ�ö��ַ�����д�������ַ���������һ��ĳ���
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    string str1="���ѽ��";
    string str2("�ҽ�������.");

    string newstr1=str1 + ' ' + str2;
    cout<<" + : "<<newstr1<<endl;
    cout<<endl;
    cout << "append: " << str1.append(str2) << endl;
    cout<<endl;
    char temp1[]="���ѽ!";
    char temp2[]="�ҽ�������.";
    char newstr2[16];
    for(int a=0;a<7;a++)
        newstr2[a]=temp1[a];
    for(int a=7;a<18;a++)
        newstr2[a]=temp2[a-7];
    copy(newstr2,newstr2+18,ostream_iterator<char>(cout));
    cout<<endl;


    return 0;
}
