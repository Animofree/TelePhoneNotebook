#include "tpaddress.h"


/*int tpaddress::n1=0;*/
tpaddress::tpaddress()
{
int i=0;
ifstream infile;
infile.open( "D:\\tpaddress.txt",ios::in);
infile.seekg(0,ios::beg);

if(!infile)
{
    cerr<<"File could not be open."<<endl;
    return  ;
}

char pname[30],ptelephone[30],paddress[30],pQQ[30];
while (infile>>pname)
{
    infile>>ptelephone;
    infile>>paddress;
    infile>>pQQ;
    p1[i].setname(pname);
    p1[i].setTelephoneNumber(ptelephone);
    p1[i].setaddress(paddress);
    p1[i].setQQnumber(pQQ);
    i++;

}
n1=i;
infile.close();
}
tpaddress::~tpaddress()
{
ofstream outfile;
outfile.open("D:\\tpaddress.txt",ios::out);
if(!outfile)
{
    cerr<<"File could not be open."<<endl;
    return ;
}
    for(int i=0;i<n1;i++)
    {
        outfile<<p1[i].getname()<<'\t'<<p1[i].getTelephoneNumber()<<'\t'<<p1[i].getaddress()<<'\t'<<p1[i].getQQnumber()<<'\t'<<endl;
    }
    //outfile<<'0'<<endl;
    outfile.close();
}

void tpaddress::add()
{
    char Name[30],Tel[30],Address[30],qq[30];
    n1++;
    cout<<"Person name:";
    cin>>Name;
    p1[n1-1].setname(Name);
    cout<<"Person telephone:";
    cin>>Tel;
    p1[n1-1].setTelephoneNumber(Tel);
    cout<<"Person address:";
    cin>>Address;
    p1[n1-1].setaddress(Address);
    cout<<"Person QQ:";
    cin>>qq;
    p1[n1-1].setQQnumber(qq);

}
void tpaddress::display()
{
    for(int j=0;j<n1;j++)
    {

        cout<<p1[j].getname()<<'\t'<<p1[j].getTelephoneNumber()<<'\t'<<p1[j].getaddress()<<'\t'<<p1[j].getQQnumber()<<'\t'<<endl;
    }
}
void tpaddress::modify()
{
    string a;
    int b;
    int c;
    /*int t;*/
    int i;
    string Tel;
    string qq;
    string pname;
    string paddress;
    display();
    cout<<"请输入要修改的联系人的手机号码:";
    cin>>a;
    for(i=0;i<n1;i++)
{
        if(a==p1[i].getTelephoneNumber())

     {cout<<"1.修改姓名 2.修改电话号码3.修改地址4.修改QQ号 ：";
     cin>>b;
      switch(b)
      {
      case 1:
        cout<<"新姓名:";
        cin>>pname;
        p1[i].setname(pname);
        cout<<p1[i].getname();
        break;
      case 2:
        cout<<"新电话号码:";
        cin>>Tel;
        p1[i].setTelephoneNumber(Tel);
        cout<<p1[i].getTelephoneNumber();
        break;
      case 3:
        cout<<"新地址：";
        cin>>paddress;

        p1[i].setaddress(paddress);
        cout<<p1[i].getaddress();
        break;
      case 4:
        cout<<"qq号";
        cin>>qq;
        p1[i].setQQnumber(qq);
        cout<<p1[i].getQQnumber();
        break;
      }

    cout<<"是否确认所修改的信息：1.是 2.重新修改："<<endl;
    cin>>c;
     switch(c)
      {
    case 1:
         break;

    case 2:
        modify();
        break;
        default: break;
       }
     }
       /*getchar();*/

        if(i>n1||i==n1)
            {
                 cout<<"查无此人:"<<endl;
                 return ;
            }

}
}

void tpaddress::Delete()
{
    string NAme;
    //display();
    cout<<"请输入要删除联系人的姓名："<<endl;
    cin>>NAme;
    int m=0;
    for(;m<n1;m++)
    {

        if(NAme==p1[m].getname())
           break;
    }
    if(m<n1)
    {
        for(;m<n1-1;m++)
        {
             p1[m]=p1[m+1];
        }
    n1--;
    }
    /*for(;k<m-1;k++)
    {
        p[k]=p[k+1];

    }*/

    /*int m,num=0;
    string Name;
    cout<<"请输入要删除的联系人名字:"<<endl;
    cin>>Name;
    cout<<endl;
    Telephone.setname(Name);
    for()*/
}
 void tpaddress::searchbyTel()
 {
     string TEL;
     int i,t;
     cout<<"请输入要查找的联系人的电话号码："<<endl;
     cin>>TEL;
     for(i=0;i<n1;i++)
     {
         if(TEL==p1[i].getTelephoneNumber())
         {
             cout<<"该联系人的信息如下:"<<endl;
             cout<<p1[i].getname()<<'\t'<<p1[i].getTelephoneNumber()<<'\t'<<p1[i].getaddress()<<'\t'<<p1[i].getQQnumber()<<'\t'<<endl;
             break;
         }
         /*if(i==n)*/
         else
         {
             cout<<"查无此人"<<endl;

         cout<<"1.退出 2.继续查询"<<endl;
         cin>>t;
         switch(t)
         {
      case 1:
        break;
      case 2:
          /*system("cls");*/
        searchbyTel();
        break;
      default :
        break;
         }
     }
 }

}
