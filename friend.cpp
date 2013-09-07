#include <iostream>
#include <cstring>
 
using namespace std;
 
class Internet
{
public:
    Internet(char *name,char *addres) {
        strcpy(Internet::name, name);
        strcpy(Internet::address, address);
    }
    friend void ShowN(Internet &obj); //友元函数的声明
private:
    char name[20];
    char address[20];
};
 
void ShowN(Internet &obj) //函数定义,不能写成,void Internet::ShowN(Internet &obj)
{
    cout<<obj.name<<endl;
}
 
int main()
{
    Internet a("CNDEV-LAB","www.cndev-lab.com");
    ShowN(a);
    cin.get();
}
/*
$ a.exe
CNDEV-LAB
* */
