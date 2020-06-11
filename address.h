
#ifndef TELEPHONENOTEBOOK_ADDRESS_H
#define TELEPHONENOTEBOOK_ADDRESS_H
class address
{
public:
    //定义多个纯虚函数，实现不同功能
    virtual void add() = 0;//增加
    virtual void Delete() = 0;//删除
    virtual void display() = 0;//打印
    virtual void modify() = 0;//修改
    virtual void searchByTel() = 0;//按照号码查找
};
#endif //TELEPHONENOTEBOOK_ADDRESS_H
