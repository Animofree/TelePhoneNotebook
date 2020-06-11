

#ifndef TELEPHONENOTEBOOK_CADDRESS_H
#define TELEPHONENOTEBOOK_CADDRESS_H

# include "address.h"
# include "card.h"
#include<iostream>
using namespace std;
#include<fstream>

class caddress: public address//继承抽象类address
{
public:
    /*static*/	int n2;;
    card p2[1000];
    caddress();
    ~caddress();
    void add();//增加
    void Delete();//删除
    void display();//显示
    void modify();//修改
    void searchByTel();//按照号码查找
};

#endif //TELEPHONENOTEBOOK_CADDRESS_H
