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
	cin>>a;
	cin>>b;
	cin>>c;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    }
    
};
class draw:private make{
public:
    int m;
};
int main(){
draw ob;
ob.show();
cout<<sizeof(draw);
return 0;
}
