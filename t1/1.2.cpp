//2.��дһ��int�ͱ�������100�����οռ�ĳ���
#include <iostream>
using namespace std;
int main()
{
    int *p;

    p=new int[100];

    delete []p;

    return 0;
}
