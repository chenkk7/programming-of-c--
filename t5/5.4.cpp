/*4.����һ��Dog�࣬���þ�̬���ݳ�ԱDogs��¼Dog�ĸ�����Ŀ��
��̬��Ա����GetDogs������ȡDogs����Ʋ���������ࡣ*/

#include <iostream>
using namespace std;

class Dogs{
private:
    static int num;
public:
    Dogs(){}
    Dogs(int n){num = n;}
    static int GetDogs(Dogs &a,int n);
    int getn(){return num;}
};

int Dogs::num=0;

int main()
{
    Dogs a,b,c;
    cout<<"���ڹ���"<<a.getn()<<"ֻ"<<endl;
    b = 1;
    cout<<"���ڹ���"<<a.getn()<<"ֻ"<<endl;
    cout<<"���ڹ���"<<b.GetDogs(a,2)<<"ֻ"<<endl;
    cout<<"���ڹ���"<<c.GetDogs(b,2)<<"ֻ"<<endl;
    c = 2;
    cout<<"���ڹ���"<<c.GetDogs(b,2)<<"ֻ"<<endl;

    return 0;
}

int Dogs::GetDogs(Dogs &a,int n){
    a.num += n;
    return a.num;
}
