
#include "caddress.h"

caddress::caddress()
{
    int i = 0;
    ifstream infile;
    infile.open( "D:\\caddress.txt",ios::in);
    if(!infile)
    {
        cerr << "File could not be open." << endl;
        return;
    }
    char pname [20];
    char ptelephone[20];
    while(infile >> pname)
    {
        infile >> ptelephone;
        p2[i].setname(pname);
        p2[i].setTelephoneNumber(ptelephone);
        i++;
    }
    n2 = i;
    infile.close();
}

caddress::~caddress()
{
    ofstream outfile;
    outfile.open("D:\\caddress.txt",ios::out);
    if(!outfile)
    {
        cerr << "File could not be open." << endl;
        return;
    }
    for(int i = 0; i < n2; i++)
    {
        outfile << p2[i].getname() << '\t' << p2[i].getTelephoneNumber() << '\t' << endl;
    }
    outfile.close();
}
void caddress::add()
{
    char Name[30],Tel[30];
    n2++;
    cout << "Person name:";
    cin >> Name;
    p2[n2-1].setname(Name);
    cout << "Person telephone:";
    cin >> Tel;
    p2[n2-1].setTelephoneNumber(Tel);
}
void caddress::display()
{
    for(int j=0;j<n2;j++)
    {
        cout << p2[j].getname() << '\t' << p2[j].getTelephoneNumber() << '\t'<<endl;
    }

}
void caddress::modify()
{
    string a;
    int b;
    int c;
    int i;
    string Tel;
    string pname;
    display();
    cout << "请输入要修改的联系人的手机号码:";
    cin >> a;
    for(i = 0; i <n2; i++)
    {
        if(a==p2[i].getTelephoneNumber())
        {
            cout << "1.修改姓名 2.修改电话号码 ：";
            cin >> b;
            switch(b)
            {
                case 1:
                    cout << "新姓名:";
                    cin >> pname;
                    p2[i].setname(pname);
                    cout << p2[i].getname();
                    break;
                case 2:
                    cout << "新电话号码:";
                    cin >> Tel;
                    p2[i].setTelephoneNumber(Tel);
                    cout << p2[i].getTelephoneNumber();
                    break;
            }
            cout<<"是否确认所修改的信息：1.是 2.重新修改："<<endl;
            cin >> c;
            switch(c)
            {
                case 1:
                    display();
                    break;
                case 2:
                    modify();
                    break;
                default:
                    break;
            }
        }
    }

    if(i > n2 || i == n2)
    {
        cout << "查无此人:" << endl;
        return ;
    }
}
void caddress::Delete()
{
    string Name;
    cout << "请输入要删除联系人的姓名：" << endl;
    cin >> Name;
    int m = 0;
    for(; m < n2; m++)
    {
        if(Name == p2[m].getname())
            break;
    }
    if(m < n2)
    {
        for(; m < n2 - 1; m++)
        {
            p2[m] = p2[m+1];
        }
        n2--;
    }
}
void caddress::searchByTel()
{
    string TEL;
    int i, t;
    cout << "请输入要查找的联系人的电话号码：" << endl;
    cin >> TEL;
    for(i = 0; i < n2; i++)
    {
        if(TEL == p2[i].getTelephoneNumber())
        {
            cout << "该联系人的信息如下:" << endl;
            cout << p2[i] << endl;
            break;
        }
        if(i==n2)
        {
            cout << "查无此人"<<endl;
            cout<<"1.退出 2.继续查询"<<endl;
            cin>>t;
            switch(t)
            {
                case 1:
                    break;
                case 2:
                    searchByTel();
                    break;
                default :
                    break;
            }
        }
    }
}
