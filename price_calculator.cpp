#include<iostream>
using namespace std;
int main(){
    float price_of_item{0},subtotal{0},tax{0},amount_of_sales_tax{6},total{0};
    for(int i = 1;i<=5;i++){
        cout<<"Enter the Price of item "<<i<<" : ";
        cin>>price_of_item;
        subtotal = price_of_item+ subtotal;        
    }
    tax = subtotal * float(amount_of_sales_tax)/100;
    total = tax + subtotal;
    cout<<"Tax on Your Item : "<<tax<<endl;
    cout<<"Total Price of Your Items : "<<total<<endl;
    return 0;
}