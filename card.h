//
// Created by 86558 on 2017/12/9.
//

#ifndef TELEPHONENOTEBOOK_CARD_H
#define TELEPHONENOTEBOOK_CARD_H

#include<string.h>
#include<iostream>
using namespace std ;
class card
{
public:
    card(string="\0",string="\0" );//定义构造函数
    void setname(string);//设置姓名
    void setTelephoneNumber(string  );//设置手机号码
    string getname();//获取姓名
    string getTelephoneNumber();//获取手机号码
    friend ostream & operator << (ostream & output, card &);//定义友元函数,重载输出流
    friend istream & operator >> (istream & input, card &);//定义友元函数，重载输入流
protected:
    string  name;
    string  TelephoneNumber;
};

#endif //TELEPHONENOTEBOOK_CARD_H
