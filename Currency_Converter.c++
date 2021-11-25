#include<iostream>
using namespace std;
void main()
{
       int euro;
       float B,M,J,P;
       cout<<"Enter currency in Euros"<<endl;
       cin>>euro;
       B=euro*0.571505;
       M=euro*10.7956;
       J=euro*112.212;
       P=euro*102.243;
       cout<<euro<<"Euros are equal to "<<B<<" British pounds"<<endl;
       cout<<euro<<"Euros are equal to "<<M<<" Mexican pesos"<<endl;
       cout<<euro<<"Euros are equal to "<<J<<" Japanese yen"<<endl;
       cout<<euro<<"Euros are equal to "<<P<<" Pakistani rupees"<<endl;

       system("pause");
}