#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int a= 1 + rand()%99999,b=1+rand()%99999;
    cout<<" "<<a<<endl;
    cout<<"+"<<b<<endl;
    cout<<"Pause Solve it in Your Mind ..!";
    cin.get();
    cout<<" "<<a<<endl;
    cout<<"+"<<b<<endl;
    cout<<"_____________"<<endl;
    cout<<" "<<a+b<<endl;
    return 0;
}