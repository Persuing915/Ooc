#include<iostream>
using namespace std;
class animal{
public:
void eat(){
cout<<"I can eat"<<endl;
}
void sleep(){
cout<<"I can sleep"<<endl;
}
};
class dog:public animal{
public:
void bark(){
cout<<"I can Bark"<<endl;
}
};
int main(){
dog dog1;
dog1.eat();
dog1.sleep();
dog1.bark();
return 0;
}
