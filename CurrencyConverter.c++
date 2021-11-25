#include<iostream>
using namespace std;

int main()
{
    float euro;
    float rub=(1/0.119);
    float usd=(1/0.892);
    float jpy=(1/0.007);
    float gbp=(1/1.190);

    cout<<"Input Euros:\n";
    cin>>euro;

    cout<<"Russian Ruble(RUB):"<<rub*euro<<endl;
    cout<<"United States dollars(USD):"<<usd*euro<<endl;
    cout<<"Japanese yen(JPY):"<<jpy*euro<<endl;
    cout<<"British pounds(GBP):"<<gbp*euro<<endl;
    
    return 0;
}