// C++ program to illustrate Constructor Overloading
#include<iostream>
using namespace std;
class Construct
{
public:
float area;
Construct()
{
area = 0;
}
Construct(int a,int b)
{
area=a * b;
}
void disp()
{
cout<<area<<endl;
}
};
int main()
{
Construct O;
Construct O2(10,20);
O.disp();
O2.disp();
return 1;
}

