#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int randomNumber = 65 + (rand()%26);
    cout<<char(randomNumber)<<endl;
}
