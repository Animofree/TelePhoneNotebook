
#ifndef TELEPHONENOTEBOOK_TPADDRESS_H
#define TELEPHONENOTEBOOK_TPADDRESS_H
# include "Telephone.h"
# include "caddress.h"
# include "address.h"

class tpaddress: public address//继承抽象类address
{
public:
    int  n1;//设置手机联系人数量n
    Telephone p1[1000];//定义手机联系人数组
    tpaddress();
    ~tpaddress();
    void add();//增加一个联系人
    void Delete();//删除一个联系人
    void display();//显示所有联系人
    void modify();//修改联系人信息
    void searchbyTel();//按照号码查找联系人
};
#endif //TELEPHONENOTEBOOK_TPADDRESS_H
