
#ifndef TELEPHONENOTEBOOK_USER_H
#define TELEPHONENOTEBOOK_USER_H

# include "caddress.h"
# include "address.h"
#include "tpaddress.h"

class User
{
public:
    address *p;//调用指针
    tpaddress p1;//定义tpaddress类对象
    caddress p2;//定义caddress类对象
    void add();
    void Delete();
    void display();
    void modify();
    void searchbyTel();
    void movetoTel();//移动到手机中
    void movetoCard();//移动到手机卡中
    void copyCard();//从手机卡中复制
    void copyTel();//从手机中复制
};
#endif //TELEPHONENOTEBOOK_USER_H
