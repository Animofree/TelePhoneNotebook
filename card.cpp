
#include "menu.h"

void menu::display()
{
    cout<<"==========================================================================================================================="<<endl;
    cout<<"***"<<"              通讯录管理系统                      "<<"***"<<endl;
    cout<<"***"<<"              0.浏览通讯录                        "<<"***"<<endl;
    cout<<"***"<<"              1.查询联系人信息                    "<<"***"<<endl;
    cout<<"***"<<"              2.修改联系人信息                    "<<"***"<<endl;
    cout<<"***"<<"              3.删除联系人                        "<<"***"<<endl;
    cout<<"***"<<"              4.增加联系人信息                    "<<"***"<<endl;
    cout<<"***"<<"              5.将手机联系人复制到手机卡中        "<<"***"<<endl;
    cout<<"***"<<"              6.将手机卡联系人复制到手机中        "<<"***"<<endl;
    cout<<"***"<<"              7.将手机联系人移动到手机卡中        "<<"***"<<endl;
    cout<<"***"<<"              8.将手机卡联系人移动到手机中        "<<"***"<<endl;
    cout<<"==========================================================================================================================="<<endl;
    int n;

    cout<<"***请选择需要操作的步骤（0-8）***"<<endl;
    cin>>n;
    if(n>9)
    {cout<<"输入错误,请重新输入："<<endl;
        return ;
    }

    else
    {
        switch(n)
        {case 0:
                p.display();
                break;
            case 1:
                p.searchbyTel();
                break;
            case 2:
                p.modify();
                break;
            case 3:
                p.Delete();
                break;
            case 4:
                p.add();
                break;
            case 5:
                p.copyCard();
                break;
            case 6:
                p.copyTel();
                break;
            case 7:
                p.movetoCard();
                break;
            case 8:
                p.movetoTel();
                break;
        }
    }
    cout<<"是否退出：1.是 2.否 ，重新进行操作："<<endl;
    int t;
    cin>>t;
    switch(t)
    {
        case 1:
            break;
        case 2:
            display();
            break;
        default: break;
    }
}



