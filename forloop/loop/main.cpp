#include <iostream>

using namespace std;

int main()
{
    int nom;
    int sum;
    double ave;
    cout<<"How many number do you want to find the average of?: ";
    cin>>nom;

    for (int i = 2; i<=(nom*2); i=2+i){
        sum=sum + i;

    }

    ave=sum/nom;
    cout<<"The average of the first"<<nom<<" even numbers is "<<ave;
    return 0;
}
