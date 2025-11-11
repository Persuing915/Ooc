// Implement a Rectangle with attribute for length and width.Include constructorrs, a destructor and member functions to calculate the area and perimeter
#include<iostream>
using namespace std;
class Rectangle{
private:
double length;
double width;
public:
Rectangle():length(1.0),width(1.0){}
Rectangle(double len,double wid):length(len),width(wid){}
~Rectangle(){
cout<<"Rectangle object destroyed"<<endl;
}
double getlength()const{
return length;
}
double getwidth()const{
return width;
}
void setlength(double len){
length=len;
}
void setwidth(double wid){
width=wid;
}
double calculateArea()const{
return length*width;
}
double calculatePerimeter()const{
return 2*(length+width);
}
};
int main(){
Rectangle rect(4.0,40.0);
cout<<"Rectangle properties:"<<endl;
cout<<"length:"<<rect.getlength()<<endl;
cout<<"width:"<<rect.getwidth()<<endl;
cout<<"Area:"<<rect.calculateArea()<<endl;
cout<<"Perimeter:"<<rect.calculatePerimeter()<<endl;
return 0;
}


