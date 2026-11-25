#include<iostream>
using namespace std;
int main(){
    char lower,upper;
    cout<<"Enter a Lower Case Charcter : ";
    cin>>lower;
    cout<<lower <<" = "<<char(lower-32)<<endl;
    return 0;
}