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
    cout<<b<<endl;
    cout<<c<<endl;
    }
    
};
class draw:protected make{
public:
    int m;
};
int main(){
draw ob,ob1;
cout<<sizeof(draw);

getchar();
return 0;
}
