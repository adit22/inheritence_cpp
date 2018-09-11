#include<iostream>
#include<stdio.h>
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
	cout<<"value of public member"<<endl;
    cout<<a<<endl;
    }
    void show1(){
		cin>>b>>c;
		cout<<"value of private and public member"<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
		getchar();
    }
};
class draw:public make{
public:
    int m;
};
int main(){
draw ob,ob1;
//accessing public member
cin>>ob.a;
ob.show();
//accessing private and protected member through public member function of class
ob1.show1();
getchar();
return 0;
}
