#include<iostream>
#include<iostream>
using namespace std;
int main(){
    const double yen{143.83},euro{0.89};
    float dollar{0};
    cout<<"Enter Amount in Dollar : ";
    cin>>dollar;
    cout<<dollar<<" Dollar = "<<dollar*yen<<endl;
    cout<<dollar<<" Dollar = "<<dollar*euro<<endl;
    // cout<<dollar<<" Dollar = "<<typeid(dollar*yen).name()<<endl;
    // cout<<dollar<<" Dollar = "<<typeid(dollar*euro).name()<<endl;
}