/*2.���һ��ʹ�ó�����Ա������ʾ������*/

#include <iostream>
using namespace std;

class Example{
private:
    const int x;
    int y;
public:
    Example():x(0),y(0){}
    Example(int a,int b):x(a),y(b){}
    int getx() const  { return x; }
    int gety(){ return y; }
};

int main()
{
    Example a(1,2),b;

    cout<<a.getx()<<" "<<b.getx()<<endl;
    cout<<a.gety()<<" "<<b.gety()<<endl;



    return 0;
}

