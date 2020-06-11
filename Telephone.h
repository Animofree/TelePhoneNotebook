
#ifndef TELEPHONENOTEBOOK_TELEPHONE_H
#define TELEPHONENOTEBOOK_TELEPHONE_H
# include<string>
#include<iostream>
using namespace std;
#include "card.h"

class Telephone:public card
{
public:
    Telephone(string="\0" ,string="\0" );//构造函数设置默认值
    void setaddress(string);//设置地址
    void setQQnumber(string);//设置QQ号码
    string getaddress();//获取地址
    string getQQnumber();//获取QQ号码
    friend ostream & operator << (ostream & output, Telephone &);//友元函数重载
    friend istream & operator >> (istream & input, Telephone &);
protected :
    string  address;
    string  QQnumber;
};
#endif //TELEPHONENOTEBOOK_TELEPHONE_H
