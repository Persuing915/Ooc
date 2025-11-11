#include<iostream>
#include<stdio.h>
using namespace std;
class Student
{
int roll;
char name[25];
public:
void getdata()
{
cout<<"\n---------------";
cout<<"\n Enter Roll No.   ";
cin>>roll;
cout<<"\n Enter Student Name  ";
cin>>name;
}
void putdata()
{
cout<<"\n------------------";
cout<<"\n ****** Student marklist ********";
cout<<"\n Roll No.    :"<<roll;
cout<<"\n Student name  :"<<name<<endl;
}
};
class StudentExam:public Student
{
public:
int sub1,sub2,sub3,sub4,sub5,sub6;
float per;
public:
void accept_data()
{
getdata();
cout<<"\n Enter Marks for subject 1:";
cin>>sub1;
cout<<"\n Enter Marks for subject 2:";
cin>>sub2;
cout<<"\n Enter Marks for subject 3:";
cin>>sub3;
cout<<"\n Enter Marks for subject 4:";
cin>>sub4;
cout<<"\n Enter Marks for subject 5:";
cin>>sub5;
cout<<"\n Enter Marks for subject 6:";
cin>>sub6;
}
void display_data()
{
putdata();
cout<<"\n marks of subject1: "<<sub1;
cout<<"\n marks of subject1: "<<sub2;
cout<<"\n marks of subject1: "<<sub3;
cout<<"\n marks of subject1: "<<sub4;
cout<<"\n marks of subject1: "<<sub5;
cout<<"\n marks of subject1: "<<sub6;
}
};
class StudentResult:public StudentExam
{
public:
void calculate()
{
per=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
cout<<"\n\n Total Percentages: "<<per;
cout<<"\n -------------\n";
}
};
int main()
{
StudentResult str;
int cnt,i;
cout<<"\n Enter No. of Student You Want?";
cin>>cnt;
for(i=0;i<cnt;i++)
{
str.accept_data();
str.display_data();
str.calculate();
}
return 0;
}
