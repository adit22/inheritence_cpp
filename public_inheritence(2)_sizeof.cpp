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
    cout<<a<<endl;
    getchar();
    
    }
    void show1(){
		cin>>b>>c;
		cout<<b<<endl;
		cout<<c<<endl;
    }
};
class draw:public make{
public:
    int m;
};
int main(){
draw ob,ob1;
cout<<sizeof(draw)<<endl;
//cin>>ob1.a;
//ob1.show();
getchar();
return 0;
}
