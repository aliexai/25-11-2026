#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double rate{0},annual_interest_rate{0},loan{0},temp{0},payment{0};
    int number_of_loan_payment{0};
    cout<<"Enter the Loan Amount : ";
    cin>>loan;
    cout<<"Enter the Annual Interest Rate (e.g 12 is 12%) : ";
    cin>>annual_interest_rate;
    cout<<"Enter the Number of Payment : ";
    cin>>number_of_loan_payment;
    rate = float(annual_interest_rate)/12;
    temp = pow(1+(rate/100),number_of_loan_payment);
    payment = (((rate/100)*temp)/(temp-1))*loan;
    cout<<fixed<<setprecision(2);
    cout<<"Loan Amount $ "<<loan<<endl;
    cout<<"Monthly Intrest Rate $ "<<annual_interest_rate/12<<"%"<<endl;
    cout<<"Number of Payments $ " <<number_of_loan_payment<<endl;
    cout<<"Payment $ "<<payment<<endl;
    cout<<"Amount Paid Back $ "<<payment*number_of_loan_payment<<endl;
    cout<<"Interst Paid Back $ "<<(payment*number_of_loan_payment)-loan<<endl;
    return 0;
}