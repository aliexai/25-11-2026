#include<iostream>
using namespace std;
int main(){
    int number_of_gallons{0},number_of_miles{0};
    bool drive;
    cout<<"Enter the Number of Gallons : ";
    cin>>number_of_gallons;
    cout<<"Enter the Number of Miles : ";
    cin>>number_of_miles;
    cout<<"Can Drive with FullTank ? Answer (1 for Yes and 0 for No): ";
    cin>>drive;
    if(drive == 1){
        cout<<"Number of Miles per Gallon : "<<float(number_of_miles)/number_of_gallons<<endl;        
    }
    else{
        cout<<"Sorry Number of Miles Cannot be Calculated ..!"<<endl;

    }
    return 0;
}
