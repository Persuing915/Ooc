// Develop a simple banking system with classes for account ,savingaccount and checkingaccount. Implement features such as deposit,withdrwal and account statement.
#include<iostream>
using namespace std;
class savingaccount 
{
	 public:
	 string savingaccountholdername;
	 int accountnumber;
	 double balance;
	 double interestrate;
public:
	savingaccount (string holdername, int acc_number, double bal, double interest_rate)
	{
	savingaccountholdername=holdername;
	accountnumber=acc_number;
	balance=bal;
	interestrate=interest_rate;
	}
void deposit(double amount)
{
 if(amount>0)
 {
 balance+=amount;
cout<<"\n balance="<<balance;

}}
void withdrawal(double amount){
 if(amount>0 && amount<=balance){
    balance-=amount;
    cout<<" \n withdrawal:"<<balance;

}
else{
cout<<" \n insufficient balance";
}
}

void applyinterest()
{
 double interestrate=balance*interestrate/100;
 balance+=interestrate/100;
cout<<" \n interest rate applied"<<interestrate;
}
 void display()
{
 
cout<<"saving account\n";
cout<<"\n account holder name"<<savingaccountholdername;
cout<<"\n account number"<<accountnumber;
cout<<"\n balance"<<balance;
cout<<"\n Intrest rate:"<<interestrate;
}
};

class checkingaccount
{
public:
string accountholdername;
int acc_no;
double balance;
double transactionfee;
public:
checkingaccount(string name,int num,double bal,double fee)
{
 accountholdername=name;
acc_no=num;
bal=balance;
transactionfee=fee;
}
void deposit(double amount)
{
if(amount>0)
{
balance+=amount;
cout<<"deposited"<<balance<<endl;
}
}
void withdrawal(double amount)
{
double total=amount+transactionfee;
if(total<=balance)
{
 balance-=total;
cout<<"\n withdrawn:"<<amount<<"\n transactionfee"<<transactionfee;
}
else
{
cout<<"insufficient balance for withdrawalfee!"<<endl;
}}
void display()
{
cout<<"\nchecking account\n";
cout<<"\n account holder name"<<accountholdername;
cout<<"\n account number"<<acc_no;
cout<<"balence"<<balance<<endl;
cout<<"\n transaction fee"<<transactionfee;
}








};

int main(){
savingaccount s1("alice",1001,5000.0,30);
checkingaccount c1("bob",1002,3000.0,200);
s1.display();
s1.deposit(1000);
s1.withdrawal(2000);
s1.applyinterest();
s1.display();
c1.display();
c1.deposit(1500);
c1.withdrawal(1000);
c1.display();
return 0;



}




















