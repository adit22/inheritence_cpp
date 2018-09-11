#include<iostream>
using namespace std;
class make{
public:
    int a;
private:
    int b;
protected:
    int c;
public:
    void show(){
    cout<<a<<endl<<b<<endl<<c;
    }
};
class draw:public make{
public:
    int m;
};
int main(){
draw ob,ob1;
cin>>ob.a;
cin>>ob.b;
cin>>ob.c;
ob1.show();
getch();
return 0;
}
