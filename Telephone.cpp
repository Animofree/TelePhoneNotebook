#include "Telephone.h"

Telephone::Telephone(string paddress,string pQQnumber)
{
    address=paddress;
    QQnumber=pQQnumber;
}
void Telephone::setaddress(string address_)
{
    address=address_;
}
void Telephone::setQQnumber(string QQnumber_)
{

    QQnumber=QQnumber_;
}
string Telephone::getaddress() { return address; }
string Telephone::getQQnumber() { return QQnumber; }
ostream & operator<<(ostream & output, Telephone & B)
{
    output<<B.address<<" ";
    output<<B.QQnumber<<" ";
    return output;
}

istream & operator>>(istream & input,Telephone & B)
{
    cout<<"please input the address and QQnumber:"<<endl;
    input>>B.address;
    input>>B.QQnumber;
    return input;
}

