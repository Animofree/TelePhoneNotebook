
#include "User.h"

void User::add()
{
    char n;
    cout<<"select telephone or card:A telephone B card"<<endl;
    cin>>n;
    if(n=='A'||n=='a')
    {
        p=&p1;
        p->add();
    }
    if(n=='B'||n=='b')
    {
        p=&p2;
        p->add();
    }
}

void User::Delete()
{
    char n;
    cout<<"select telephone or card:A telephone B card"<<endl;
    cin>>n;
    if(n=='A'||n=='a')
    {
        p=&p1;
        p->Delete();
    }
    if(n=='B'||n=='b')
    {
        p=&p2;
        p->Delete();
    }
    else
    {
        cout<<"The input in error."<<endl;
        return ;
    }
}

void User::display()
{
    char n;
    cout<<"select telephone or card:A telephone B card"<<endl;
    cin>>n;
    if(n=='A'||n=='a')
    {
        p=&p1;
        p->display();
    }
    if(n=='B'||n=='b')
    {
        p=&p2;
        p->display();
    }
}

void User::modify()
{
    char n;
    cout<<"select telephone or card:A telephone B card"<<endl;
    cin>>n;
    if(n=='A'||n=='a')
    {
        p=&p1;
        p->modify();
    }
    if(n=='B'||n=='b')
    {
        p=&p2;
        p->modify();
    }
}

void User::searchbyTel()
{

    char n;
    cout<<"select telephone or card:A telephone B card"<<endl;
    cin>>n;
    if(n=='A'||n=='a')
    {

        p=&p1;
        p->searchByTel();
    }
    if(n=='B'||n=='b')
    {p=&p2;
        p->searchByTel();
    }
}

void User::copyTel()
{
    string aa,bb,cc="",dd="";
    ifstream input;
    ofstream output;
    input.open("D:\\caddress.txt",ios::in);
    output.open("D:\\tpaddress.txt",ios::app);
    if(!input||!output)
    {
        cout<<"打开失败！"<<endl;
    }
    else
    {
        while(input>>aa>>bb)
        {
            int flag=0;
            if(p1.n1>1000)
            {
                cout<<"内存已满！"<<endl;
                break;
            }
            for(int i=0;i<p1.n1;i++)
            {
                if(p1.p1[i].getname() == aa && p1.p1[i].getTelephoneNumber ()== bb)
                {
                    cout<<p1.p1[i].getname()<<"已经存在！"<<endl;
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                output<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<endl;
                p1.p1[p1.n1].setname(aa);
                p1.p1[p1.n1].setTelephoneNumber(bb);
                p1.p1[p1.n1].setQQnumber(dd);
                p1.p1[p1.n1].setaddress(cc);

                cout<<"复制成功！"<<endl;
                p1.n1++;
            }

        }
    }
    input.close();
    output.close();

}
void User::copyCard()
{
    string aa,bb,cc,dd;
    ifstream input;
    ofstream output;
    input.open("D:\\tpaddress.txt",ios::in);
    output.open("D:\\address.txt",ios::app);
    if(!input||!output)
    {
        cout<<"打开失败！"<<endl;
    }
    else
    {
        while(input>>aa>>bb>>cc>>dd)
        {
            int flag=0;
            if(p2.n2>1000)
            {
                cout<<"内存已满！"<<endl;
                break;
            }
            for(int i=0;i<p2.n2;i++)
            {
                if(p2.p2[i].getname() == aa && p2.p2[i].getTelephoneNumber()== bb)
                {
                    cout<<p2.p2[i].getname()<<"已经存在！"<<endl;
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                output<<aa<<" "<<bb<<endl;
                p2.p2[p2.n2].setname(aa);
                p2.p2[p2.n2].setTelephoneNumber(bb);
                cout<<"复制成功！"<<endl;
                p2.n2++;

            }

        }
    }
    input.close();
    output.close();

}
void User::movetoTel()
{
    string str;
    int n=0,flag=0;
    cout<<"请输入您要移动的手机卡联系人姓名：";
    cin>>str;
    int x;
    for(int i=0;i<p2.n2;i++)
    {
        if( p2.p2[i].getname()==str)
        {
            x=i;
            break;
        }

    }
    for(int i=0;i<p1.n1;i++)
    {
        if( p1.p1[i].getname()==str)
        {
            cout<<"您要移动的联系人已经存在！"<<endl;
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        if(p1.n1>1000)
        {
            cout<<"内存不足！"<<endl;
            /*abort();*/
            return ;
        }

        p1.p1[p1.n1].setname(str);
        p1.p1[p1.n1].setTelephoneNumber(p2.p2[x].getTelephoneNumber());
        p1.p1[p1.n1].setQQnumber("qq不存在！");
        p1.p1[p1.n1].setaddress("籍贯不存在！");

        p1.n1++;
        cout<<"移动成功！"<<endl;
        for( int i=n; i<p2.n2; i++)
        {
            p1.p1[i].setname(p2.p2[i+1].getname());
            p1.p1[i].setTelephoneNumber(p2.p2[i+1].getTelephoneNumber());

            p2.n2--;
        }

    }
}

void User::movetoCard()
{
    string str;
    int n=0,flag=0;
    cout<<"请输入您要移动的手机联系人姓名：";
    cin>>str;
    int x;
    for(int i=0;i<p1.n1;i++)
    {
        if(p1.p1[i].getname()==str)
        {
            x=i;
            break;
        }

    }
    for(int i=0;i<p2.n2;i++)
    {
        if(p2.p2[i].getname()==str)
        {
            cout<<"您要移动的联系人已经存在！"<<endl;
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        if(p2.n2>1000)
        {
            cout<<"内存不足！"<<endl;
            /*abort();*/
        }
        p2.p2[p2.n2].setname(str);
        p2.p2[p2.n2].setTelephoneNumber(p1.p1[x].getTelephoneNumber());
        p2.n2++;
        cout<<"移动成功！"<<endl;
        for( int i=n; i<p1.n1; i++)
        {
            p2.p2[i].setname(p1.p1[i+1].getname());

            p2.p2[i].setTelephoneNumber(p1.p1[i+1].getTelephoneNumber());

        }
        p1.n1--;
    }

}


