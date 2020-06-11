#include "card.h"

card::card(string pname,string pTelephoneNumber)
{
    name=pname;
    TelephoneNumber=pTelephoneNumber;
}
void card::setname(string name_)
{
    name=name_;
}
void card::setTelephoneNumber(string TelephoneNumber_)
{

    TelephoneNumber=TelephoneNumber_;
}
string card::getname() { return name; }
string card::getTelephoneNumber() { return TelephoneNumber; }
ostream & operator<<(ostream & output, card & A)
{
    output<<A.name<<" ";
    output<<A.TelephoneNumber<<" ";
    return output;
}

istream & operator>>(istream & input,card & A)
{
    cout<<"please input the name and telephone:"<<endl;
    input>>A.name;
    input>>A.TelephoneNumber;
    return input;
}
