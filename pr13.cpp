#include <iostream>
using namespace std;

int main()
{
    float amount, total, time, interest;
    cout<<"WELCOME TO INTEREST CALLCULATOR"<<endl<<endl;
    cout<<"Enter the amount: ";
    cin>>amount;
    cout<<"Enter the interest rate(in %): ";
    cin>>interest;
    cout<<"Enter the time(in years): ";
    cin>>time;

    total=(amount*interest*time)/100;

    cout<<"Total interest is: "<<total;
    return 0;
}
