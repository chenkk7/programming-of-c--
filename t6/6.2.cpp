/*������ĳ��˾������ְ��Ա�����۾��������Ա�Ĺ��ʼ��㷽����
��ƺ��ʵĻ���������࣬ʵ����һ���ʹ�������*/
#include <iostream>
using namespace std;
/*****************************************************************/
const double SMANPUSH = 0.04;
const double SMANAGERPUSH = 0.005;
const double TIMEPAY = 100.0;
const double FIXEDPAY_AGENCY = 8000.0;
const double FIXEDPAY_SALE = 5000.0;
/*****************************************************************/
class PartTimer{//��ְ��Ա
    private:
        double worktime_;
    public:
        PartTimer() {}
        PartTimer(double a): worktime_(a) {}
        double GetPay() const{return worktime_ * TIMEPAY;}
};

class AgencyManager{//��˾����
    private:
        double fixedPay_;
    public:
        AgencyManager() {fixedPay_ = FIXEDPAY_AGENCY; }
        double GetPay() const{return fixedPay_;}
};

class Salesman{//����Ա
    protected:
        double totalSales_;
    public:
        Salesman(){}
        Salesman(double a) {totalSales_ = a;}
        double GetPay() const{ return totalSales_ * SMANPUSH; }
};

class SaleManager:public Salesman{//���۾���
    private:
        double fixedPay_;
    public:
        SaleManager() {}
        SaleManager(double a): Salesman(a) { fixedPay_ = FIXEDPAY_SALE;}
        double GetPay() const { return ((totalSales_ * SMANAGERPUSH) + (fixedPay_));}
};

/*****************************************************************/
int main()
{
    double totalsales,worktime;

    cout<<"���뵱�������ܶ�:";
    cin>>totalsales;
    cout<<"��ְ��Ա����ʱ��:";
    cin>>worktime;

    PartTimer a(worktime);
    Salesman b(totalsales);
    AgencyManager c;
    SaleManager d(totalsales);

    cout<<"��˾�����ʣ�"<<c.GetPay()<<endl;
    cout<<"��ְ��Ա���ʣ�"<<a.GetPay()<<endl;
    cout<<"���۾����ʣ�"<<d.SaleManager::GetPay()<<endl;
    cout<<"������Ա���ʣ�"<<b.Salesman::GetPay()<<endl;

    return 0;
}
/*****************************************************************/
