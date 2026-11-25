#include<iostream>
using namespace std;
int main(){
    int start{0},end{0},sum{0};
    cout<<"Enter the Start Number : ";
    cin>>start;
    cout<<"Enter the End Number : ";
    cin>>end;
    for(start;start<=end;start++){
        sum = start+sum;
    }
    cout<<"Sum from "<<start<<" to "<<end<<" = "<<sum<<endl;
    return 0;
}