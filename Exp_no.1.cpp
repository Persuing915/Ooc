// Implement a program to define a Studentclass with attribute like name,roll number,and marks.Implement member functions to input and display student detail.
#include<iostream>
using namespace std;
class Student{
private:
char name[10];
int rollno;
float marks;
public:
void inputdetails(){
cout<<"Enter your name"<<endl;
cin>>name;
cout<<"Enter you roll no"<<endl;
cin>>rollno;
cout<<"Enter you marks"<<endl;
cin>>marks;
}
void displaydetails(){
cout<<"student name"<<name<<endl;
cout<<"student roll no"<<rollno<<endl;
cout<<"marks"<<marks<<endl;
}
};
int main(){
Student Studobj;
Studobj.inputdetails();
cout<<"\n student details"<<endl;
Studobj.displaydetails();
return 0;
}
